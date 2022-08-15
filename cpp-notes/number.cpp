#include <iostream>
#include <climits>

using namespace std;

int main()
{
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
  unsigned short a = -1;
  cout << a << endl; // 65534

  // 2. 실수형
  float b = 3.14; // 3.14
  int c = 3.14;   // 3

  cout << b << " " << c << endl;

  return 0;
}