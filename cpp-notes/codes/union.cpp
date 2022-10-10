#include <iostream>

using namespace std;

int main() {
  // 공용체(union)
  // 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음

  union MyUnion {
    int intVal;
    long longVal;
    float floatVal;
  };

  MyUnion test;
  test.intVal = 3;
  cout << test.intVal << endl; // 3
  test.longVal = 33;
  cout << test.intVal << endl;  // 33
  cout << test.longVal << endl; // 33
  test.floatVal = 3.3;
  cout << test.intVal << endl;   // 1079194419
  cout << test.longVal << endl;  // 1079194419
  cout << test.floatVal << endl; // 3.3

  return 0;
}
