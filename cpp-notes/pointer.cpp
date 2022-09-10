#include <iostream>
using namespace std;

int main()
{
  // 1. 주소
  // - 변수가 저장되어 있는 위치
  // - 16진수의 값
  // - 변수명 앞에 &를 붙임
  int val = 3;
  cout << &val << endl; // 16진수 값

  // C++ : 객체지향 프로그래밍
  /*
  컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.
  ex) 배열 생성
  재래적/절차적 프로그래밍: 배열의 크기가 미리(컴파일 중) 결정
  객체지향 프로그래밍: 배열의 크기를 실행 시간에 결정
  */

  // 2. 포인터
  // - 사용할 주소에 이름을 붙인다.
  // - 포인터의 이름이 주소를 나타냄
  // * (간접값 연산자, 간접 참조 연산자)

  // int *a; - c style
  // int* b; - c++ style
  // int* c, d; - c는 포인터 변수, d는 int형 변수

  int a = 6;
  int *b;

  b = &a;

  cout << "a의 값 " << a << endl;
  cout << "*b의 값 " << *b << endl;

  cout << "a의 주소 " << &a << endl;
  cout << "*b의 주소 " << b << endl;

  *b = *b + 1;

  cout << "이제 a의 값은 " << a << endl;

  // 3. new 연산자
  // - 어떤 데이터형을 원하는지 new 연산자에게 알려주면
  //   new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아내고 그 블록의 주소를 리턴한다.

  int *pointer = new int; // 데이터 객체를 지시

  // 4. delete 연산자
  // - 사용한 메모리를 다시 메모리 풀로 환수
  // - 환수된 메모리는 프로그램의 다른 부분이 다시 사용
  // - new를 사용한 후 반드시 delete 사용

  int *ps = new int; // 메모리 사용
  delete ps;

  /*
  delete 연산자 사용 규칙
  - new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
  - 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
  - new[]로 메모리를 대입할 경우 delete[]로 해제한다.
  - 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.
  */

  double *p3 = new double[3]; // double형 데이터 3개를 저장할 수 있는 공간을 대입한다.
  p3[0] = 0.2;                // p3를 배열 이름처럼 취급한다.
  p3[1] = 0.5;
  p3[2] = 0.8;

  cout << "p3[1] is " << p3[1] << endl;

  p3 = p3 + 1; // 포인터를 증가시킨다. ( 1 => double형 데이터 공간 1개 )

  cout << "Now p3[0] is " << p3[0] << " and ";
  cout << "p3[1] is " << p3[1] << endl;

  p3 = p3 - 1; // 다시 시작 위치를 지시한다.
  delete[] p3; //배열 메모리를 해제한다.

  // 5. 포인터 연산
  const int SIZE = 20;

  char animal[SIZE];
  char *ps1;

  cout << "동물 이름을 입력하십시오. " << endl;
  cin >> animal;

  ps1 = new char[strlen(animal) + 1];
  strcpy(ps1, animal);

  cout << "입력하신 동물 이름을 복사하였습니다." << endl;
  cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int *)animal << " 입니다." << endl;
  cout << "복사된 동물 이름은 " << ps1 << "이고, 그 주소는 " << (int *)ps1 << " 입니다." << endl;

  delete[] ps1;

  // 6. 동적 구조체
  // 동적 구조체 생성
  // temp *ps = new temp;
  // . 대신 -> 사용

  struct MyStruct
  {
    char name[20];
    int age;
  };

  MyStruct *temp = new MyStruct;

  cout << "당신의 이름을 입력하십시오." << endl;
  cin >> temp->name;

  cout << "당신의 나이를 입력하십시오." << endl;
  cin >> (*temp).age;

  cout << "안녕하세요! " << temp->name << "씨!" << endl;
  cout << "당신은 " << temp->age << "살 이군요!" << endl;

  delete temp;

  return 0;
}