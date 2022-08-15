#include <iostream>
#define PI 3.1415926535 // define const in C

using namespace std;

int main()
{
  // 원의 넓이를 구하는 프로그램
  // 반지름 * 반지름 * 파이

  int r = 3;
  float s = r * r * 3.1415926535;

  int r2 = 3;
  float s2 = r2 * r2 * PI;

  cout << s2 << endl;

  // 1. 상수
  // 바뀔 필요가 없는 수
  // 바뀌어서는 안되는 수

  // const
  // 초기화만 가능, 대입 불가능
  const float PI1 = 3.1415926535;

  int r3 = 3;
  float s3 = r3 * r3 * PI1;

  cout << s3 << endl;

  return 0;
}