// Variable And Data Types

#include <iostream>
#include <climits>
#define PI 3.1415926535 // define const in C

using namespace std;

int main()
{
  // 변수란? 변할 수 있는 수
  // cf) 상수 : 변할 수 없는 수

  // 1. 변수의 이름

  // 숫자로 시작할 수 없다.
  // int 777aa;

  // c++에서 사용하고 있는 키워드는 사용할 수 없다.
  // int return;

  // white space를 사용할 수 없다.
  // int aaa a;

  // 2. 변수의 선언과 규칙
  int a;     // 선언
  a = 7;     // 대입
  int b = 3; // 초기화

  a = 5;
  b = 10;

  cout << "a = " << a << endl
       << "b = " << b << endl;

  // 변수는 선언된 후 사용되어야 한다.
  // block 에서 d -> error
  {
    int c;
    {
      int d;
      c = 3;
    }
    // d = 5; // error
  }

  // 1. 정수형
  // 음의 정수, 0, 양의 정수
  // short, int, long, long long
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
  // 음의 영역 사용 불가
  // 그 만큼의 영역을 양의 영역으로 넘겨줌
  // short, int, long, long long 모두 가지고 있음
  unsigned short number_a = -1;
  cout << number_a << endl; // 65534

  // 2. 실수형
  float number_b = 3.14; // 3.14
  int number_c = 3.14;   // 3

  cout << number_b << " " << number_c << endl;

  // 3. 문자형
  // char
  // 작은 문자형 - ASCII Code 에서 한 글자
  int num_a = 77;
  char char_b = num_a;
  cout << char_b << endl; // M

  // 반드시 ''(single quote)만 가능
  // null 문자 '\0'를 만나야 끝남
  // ""(double quote) -> 명시적으로 null 문자가 포함 -> string
  char char_c = 'a';
  cout << char_c << endl; // a

  // 4. bool : 0 혹은 1
  // 0 -> false, 1 -> true

  bool bool_a = 0;
  bool bool_b = 1;
  bool bool_c = 10;

  cout << bool_a << " " << bool_b << " " << bool_c << endl; // 0 1 1

  // 5. 상수
  // 바뀔 필요가 없는 수
  // 바뀌어서는 안되는 수

  // const
  // 초기화만 가능, 대입 불가능

  // 원의 넓이를 구하는 프로그램
  // 반지름 * 반지름 * 파이
  int r = 3;
  float s = r * r * 3.1415926535;

  int r2 = 3;
  float s2 = r2 * r2 * PI;

  cout << s2 << endl;

  // define const in C -> line 5
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

  // 강제적으로 데이터형 변환
  // typeName(a) OR (typeName)a

  char ch = 'M';
  cout << (int)ch << " " << int(ch) << endl;

  // C++
  // static_cast<typeName>(a)

  cout << static_cast<int>(ch) << endl;

  return 0;
}