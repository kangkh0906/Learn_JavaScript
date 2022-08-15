// Operators

#include <iostream>

using namespace std;

int main()
{
  // + - * / % -> 산술 연산자
  // 두 개의 값이 필요 -> 이 두 값을 피연산자

  // + : add
  // - : subtract
  // * : multiply
  // / : divide -> 두 피연산자가 모두 정수이면 결과값은 '몫'
  // % : remainder -> 부동 소수점(실수)에서 사용 불가능

  int a = 10;
  int b = 3;

  int c = a + b;
  int d = a - b;
  int e = a * b;
  int f = a / b;
  int g = a % b;

  cout << "c: " << c << endl;
  cout << "d: " << d << endl;
  cout << "e: " << e << endl;
  cout << "f: " << f << endl;
  cout << "g: " << g << endl;

  // c++는 일반적 산술 순서를 따름
  int h = 10;
  int i = 3;
  int j = 5;

  int multiple = h + i * j; // * -> +
  cout << multiple << endl; // 25

  int divide = h / i * j; // / -> *
  cout << divide << endl; // 15

  // 하나라도 실수형이면 결과는 실수형
  float k = 9.0;
  int l = 5;
  cout << k / l << endl; // 1.8

  return 0;
}