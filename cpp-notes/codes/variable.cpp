// Variable And Data Types

#include <climits>
#include <cstring>
#include <iostream>
#define PI 3.1415926535 // define const in C

using namespace std;

int main() {
  // 변수: 변할 수 있는 수
  // 상수: 변할 수 없는 수

  // 1. 변수의 이름
  // - 숫자로 시작할 수 없다. ex) int 777aa;
  // - c++에서 사용하고 있는 키워드는 사용할 수 없다. ex) int return;
  // - white space를 사용할 수 없다. ex) int aaa a;

  // 2. 변수의 선언과 규칙
  int a;     // 선언
  a = 7;     // 대입
  int b = 3; // 초기화

  a = 5;
  b = 10;

  cout << "a = " << a << endl
       << "b = " << b << endl;

  // - 변수는 선언된 후 사용되어야 한다.
  // ex) block 에서 d -> error
  {
    int c;
    {
      int d;
      c = 3;
    }
    // d = 5; // error
  }

  // 1. 정수형 short, int, long, long long
  // - 음의 정수, 0, 양의 정수
  short n_short = SHRT_MAX;
  int n_int = INT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  cout << "short는 " << sizeof n_short << " 바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;

  cout << "int는 " << sizeof n_int << " 바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;

  cout << "long은 " << sizeof n_long << " 바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;

  cout << "long long은 " << sizeof n_llong << " 바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;

  // unsigned
  // - 음의 영역 사용 불가
  // - 그 만큼의 영역을 양의 영역으로 넘겨줌
  // - short, int, long, long long 모두 가지고 있음
  unsigned short number_a = -1;
  cout << number_a << endl; // 65534

  // 2. 실수형 float
  float number_b = 3.14; // 3.14
  int number_c = 3.14;   // 3

  cout << number_b << " " << number_c << endl;

  // 3. 문자형 char
  // - 작은 문자형: ASCII Code 에서 한 글자
  int num_a = 77;
  char char_b = num_a;
  cout << char_b << endl; // M

  // - 반드시 ''(single quote)만 가능
  // - null 문자 '\0'를 만나야 끝남
  // - ""(double quote) -> 명시적으로 null 문자가 포함 -> string
  char char_c = 'a';
  cout << char_c << endl; // a

  // 4. bool
  // - 0 혹은 1, 0: false, 1: true

  bool bool_a = 0;
  bool bool_b = 1;
  bool bool_c = 10;

  cout << bool_a << " " << bool_b << " " << bool_c << endl; // 0 1 1

  // 5. 상수 const
  // - 바뀔 필요가 없는 수, 바뀌어서는 안되는 수
  // - 초기화만 가능, 대입 불가능

  // ex) 원의 넓이를 구하는 프로그램
  // 반지름 * 반지름 * 파이
  int r = 3;
  float s = r * r * 3.1415926535;

  int r2 = 3;
  float s2 = r2 * r2 * PI;

  cout << s2 << endl;

  // define const in C -> line 6
  const float PI1 = 3.1415926535; // define const in C++

  int r3 = 3;
  float s3 = r3 * r3 * PI1;

  cout << s3 << endl;

  // 6. 데이터형 변환
  // - 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
  // - 수식에 데이터형을 혼합하여 사용했을 때
  // - 함수에 매개변수를 전달할 때

  int n_a = 3.141592;
  cout << n_a << endl;

  // - 강제적으로 데이터형 변환
  // typeName(a) OR (typeName)a

  char ch = 'M';
  cout << (int)ch << " " << int(ch) << endl;

  // - in C++
  // static_cast<typeName>(a)

  cout << static_cast<int>(ch) << endl;

  // 7. auto
  // - 자동으로 데이터 타입을 정해줌
  // - 추천하지 않음

  auto x = 100;     // int
  auto y = 1.5;     // float
  auto z = 1.3e12L; // long long

  // 8. 배열 array
  // typeName arrayName[arraySize];
  // - 같은 데이터형의 집합
  // - 배열 원소에 대입할 값들을 콤마로 구분하여 중괄호로 묶어 선언
  // - 초기화를 선언 이후에 할 수 없다.
  // - 배열을 다른 배열에 통째로 대입할 수 없다.
  // ex)
  // short month[5] {...};
  // short year[12] {...};
  // year = month;
  // - 초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공할 수 있다.
  // - 배열을 부분적으로 초기화하면, 나머지 원소들은 모두 0으로 설정한다.
  // - 명시적으로 첫 번째 원소만 0으로 초기화하면, 나머지 원소들은 모두 0으로 초기화된다.
  // - 배열을 초기화할 때 대괄호 속을 비워두면 컴파일러가 초기화 값의 개수를 헤아려 배열 원소 개수를 저장한다.

  short month[12] = {1, 2, 3, 4};

  cout << month[0] << endl;

  // 9. 문자열
  // - 문자의 열
  char charArray[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

  cout << charArray << endl;

  char charArray1[] = "Hello";

  cout << charArray1 << endl;

  // ex)
  const int size = 15;
  char name1[size];                    // 비어있는 배열
  char name2[size] = "C++programming"; // 문자열 상수로 초기화된 배열

  cout << "안녕하세요! 저는 " << name2;
  cout << "입니다! 성함이 어떻게 되시나요?\n";
  // cin >> name1;
  cin.getline(name1, size); // cin.getline OR cin.get
  cout << "음, " << name1 << "씨, 당신의 이름은 ";
  cout << strlen(name1) << " 자입니다만\n";
  cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";
  name2[3] = '\0'; // set to null character
  cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
  cout << name2 << endl;

  // 10. string
  // - c++에서 문자열을 다루는 방법 중 하나
  // - C스타일로 string 객체를 초기화할 수 있다.
  // - cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
  // - cout을 사용하여 string 객체를 디스플레이할 수 있다.
  // - 배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.
  // - string을 다른 string에 통째로 대입할 수 있다.

  char char1[20];
  char char2[20] = "jauar";
  string str1;
  string str2 = "panda";
  // char1 = char2; // 틀리다
  str1 = str2; // 맞다

  cout << str1 << endl;
  cout << str1[0] << endl;

  return 0;
}