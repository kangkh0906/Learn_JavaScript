#include <iostream>

using namespace std;

int main()
{
  // 1. 문자형
  // char
  // 작은 문자형 - ASCII Code 에서 한 글자
  int a = 77;
  char b = a;
  cout << b << endl; // M

  // 반드시 ''(single quote)만 가능
  // null 문자 '\0'를 만나야 끝남
  // ""(double quote) -> 명시적으로 null 문자가 포함 -> string
  char c = 'a';
  cout << c << endl; // a

  return 0;
}