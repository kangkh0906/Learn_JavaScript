#include <climits>
#include <iostream>
using namespace std;

int main() {
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  cout << "int는 " << sizeof n_int << "바이트" << endl;
  cout << "이 바이트의 최대값은 " << n_int << endl;

  cout << "short는 " << sizeof n_short << "바이트" << endl;
  cout << "이 바이트의 최대값은 " << n_short << endl;

  cout << "long은 " << sizeof n_long << "바이트" << endl;
  cout << "이 바이트의 최대값은 " << n_long << endl;

  cout << "long long은 " << sizeof n_llong << "바이트" << endl;
  cout << "이 바이트의 최대값은 " << n_llong << endl;

  unsigned short a = -1;
  cout << a << endl; // 값의 범위를 벗어나 반대편으로 이동함

  return 0;
}