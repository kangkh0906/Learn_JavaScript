#include <iostream>
using namespace std;

int main() {
  int a = 3.141592; // int형 데이터에 float형 데이터를 대입함 -> int형으로 변환
  cout << a << endl;

  char ch = 'M';
  cout << (int)ch << ' ' << int(ch) << ' ' << static_cast<int>(ch) << endl;

  return 0;
}