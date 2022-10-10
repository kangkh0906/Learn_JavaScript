// Structure Type (like Object)

#include <iostream>

using namespace std;
int main() {
  // 구조체: 다른 데이터형이 허용되는 데이터의 집합
  // 배열: 같은 데이터형의 집합

  // 축구선수
  string name;
  string position;
  int height;
  int weight;

  struct MyStruct {
    // 멤버
    string name;
    string position;
    int height;
    int weight;
  } C; // C 라는 변수명으로 바로 선언 가능

  // MyStruct형의 A를 선언 후 대입
  MyStruct A;
  A.name = "Son";
  A.position = "Striker";
  A.height = 183;
  A.weight = 77;

  // MyStruct 초기화
  MyStruct B = {
      "Son",
      "Striker",
      183,
      77};

  MyStruct D[2] =
      {
          {"A", "A", 1, 1},
          {"B", "B", 2, 2},
      };

  cout << D[0].height << endl;

  cout << A.name << endl;
  cout << A.position << endl;
  cout << A.height << endl;
  cout << A.weight << endl;

  cout << B.name << endl;
  cout << B.position << endl;
  cout << B.height << endl;
  cout << B.weight << endl;

  cout << C.height << endl;

  return 0;
}
