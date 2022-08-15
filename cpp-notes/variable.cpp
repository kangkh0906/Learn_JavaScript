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
  return 0;
}