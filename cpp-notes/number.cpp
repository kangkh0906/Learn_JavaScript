#include <iostream>
#include <climits>

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

  // 3. 정수형
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
  unsigned short e = -1;
  cout << e << endl; // 65534

  // 4. 실수형
  float f = 3.14; // 3.14
  int g = 3.14;   // 3

  cout << f << " " << g << endl;

  return 0;
}