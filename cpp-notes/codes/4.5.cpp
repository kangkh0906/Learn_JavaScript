#include <iostream>
using namespace std;

int main() {
  enum spectrum { red = 0,
                  orange = 2,
                  yellow = 4,
                  green,
                  blue,
                  violet,
                  indigo,
                  ultraviolet };

  spectrum a = orange;
  cout << a << endl;

  int b;
  b = blue;
  b = blue + 3;
  cout << b << endl;

  return 0;
}
