// 반복문

#include <iostream>
using namespace std;

int main() {
  // for문
  // - 반복문에 사용할 카운터의 값을 초기화
  // - 반복문을 진행할 것인지 '조건 검사'
  // - 반복문 몸체를 수행
  // - 카운터의 값을 변화합니다
  for (int i = 0; i < 5; i++) {
    cout << i << "번째입니다." << endl;
  }

  // 증가 연산자, 감소 연산자
  int a = 10, b = 10;

  cout << "a:" << a << " b:" << b << endl; // 10 10
  cout << "a++:" << a++ << endl;           // 10
  cout << "++b:" << ++b << endl;           // 11
  cout << "a:" << a << " b:" << b << endl; // 11 11

  /*
  관계 표현식
  <  : 작다
  <= : 작거나 같다
  >  : 크다
  >= : 크거나 같다
  == : 같다
  != : 같지 않다
  */

  // while문
  string str = "String";
  int i = 0;
  while (str[i] != '\0') {
    cout << str[i] << endl;
    i++;
  }

  bool a_ = true;
  bool b_ = false;
  while (a_) { // infinite loop
    cout << "hello\n";
  }

  // for문과 while문의 차이점
  // - while문은 bool 데이터 하나만으로 선언될 수 있다.
  //  ㄴ 관계 표현식 없이 선언될 수 있다.
  // - 카운터 값을 반복문 내에서
  for (int i = 0; i < 3; i++) { // i 는 지역 변수
  }
  int j = 0;
  while (j < 3) { // j 는 전역 변수
    j++;
  }

  // do while문
  bool k = false;
  do {
    cout << "while문 입니다\n";
  } while (k);

  // 반복문의 활용

  // - 배열 기반 반복문
  int arr1[10] = {1, 3, 5, 7, 9};
  for (int i = 0; i < 5; i++) { // 배열의 인덱스를 사용
    cout << arr1[i];
  }
  cout << '\n';

  for (int i : arr1) { // 배열의 원소를 사용 (초기화되지 않은 모든 값 출력)
    cout << i;
  }

  // - 중첩 루프 : 2차원 배열
  int temp[4][5] = {
      {1, 2, 3, 4, 5},
      {11, 22, 33, 44, 55},
      {111, 222, 333, 444, 555},
      {1111, 2222, 3333, 4444, 5555},
  };
  for (int row = 0; row < 4; row++) {
    for (int col = 0; col < 5; col++) {
      cout << temp[row][col] << ' ';
    }
    cout << '\n';
  }

  return 0;
}