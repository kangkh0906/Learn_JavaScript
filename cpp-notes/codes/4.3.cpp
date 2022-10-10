#include <cstring>
#include <iostream>

using namespace std;

int main() {
  struct MyStruct {
    string name;
    string position;
    int height;
    int weight;
  } B;

  MyStruct A;
  A.name = "Son";
  A.position = "Striker";
  A.height = 183;
  A.weight = 77;
  /*
    MyStruct A = {
        "Son",
        "Striker",
        183,
        77};
  */
  cout << A.name << endl;
  cout << A.position << endl;
  cout << A.height << endl;
  cout << A.weight << endl;

  B = {};
  cout << B.height << endl;

  MyStruct C[2] = {
      {"A", "A", 1, 1},
      {"B", "B", 2, 2}};

  cout << C[0].height << endl;

  return 0;
}
