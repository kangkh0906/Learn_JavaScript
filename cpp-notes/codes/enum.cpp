#include <iostream>

using namespace std;

int main() {
  // 열거체(enum)
  // 기호 상수를 만드는 것에 대한 또다른 방법

  enum spectrum {
    red,        // 0
    orange,     // 1
    yellow,     // 2
    green,      // 3
    blue,       // 4
    violet,     // 5
    indigo,     // 6
    ultraviolet // 7
  };

  /*
  1. spectrum을 새로운 데이터형 이름으로 만듭니다.
  2. red, orange, yellow.. 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만듭니다.
  */

  spectrum a = orange;
  cout << a << endl; // 1

  // spectrum a = orange + yellow; error
  // 열거자들간 산술 허용되지 않음

  int b;
  b = blue;
  b = blue + 3;
  cout << b << endl; // 7

  // 열거자들의 값 초기화 가능
  // 반드시 '정수' 값
  enum spectrum1 {
    red = 0,    // 0
    orange = 2, // 2
    yellow = 4, // 4
    green,      // 5
    blue,       // 6
    violet,     // 7
    indigo,     // 8
    ultraviolet // 9
  };
  return 0;
}
