#include <iostream>
using namespace std;
// #define PIE 3.141592

int main() {
  const float PIE = 3.141592;
  // PIE = 1.234; // 상수는 변경이 불가능

  int r = 3;
  float s = r * r * PIE;

  int r2 = 3;
  float s2 = r2 * r2 * PIE;

  cout << s << ' ' << s2 << endl;

  return 0;
}