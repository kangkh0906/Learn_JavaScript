// 함수
// - 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합
// - 호출한 함수에게 값을 되돌려주는 return value가 있는 함수와 없는 함수로 분류
/*
1. 함수 정의 제공
2. 함수 원형 제공
3. 함수 호출

1. 리턴값이 있는 타입

typeName functionName(parameterList) {
  statement(s);
  return value; // value type == typeName
}

2. 리턴값이 없는 타입

void functionName(parameterList) {
  statement(s);
  return; // 생략될 수 있음
}
*/
#include <iostream>
using namespace std;

const float PIE = 3.14;
// 함수의 선언
void cheers(int);
float circle(int);

void helloCPP(int, int); // n, m은 매개변수 (Parameter)

// 함수와 배열
const int SIZE = 8;
// int sumArr(int *, int);
int sumArr(int *, int *);

// 함수와 구조체
struct Time {
  int hours;
  int mins;
};
const int minsPerHr = 60;

Time Tsum(Time *, Time *);
void showTime(Time);

// 재귀함수
void countDown(int);

// 함수를 지시하는 포인터
int func(int);

int main() {
  int a;
  cout << "하나의 수를 입력하십시오." << endl;
  cin >> a;
  cheers(a);

  int b;
  cout << "원의 반지름 길이를 입력하십시오." << endl;
  cin >> b;
  float c = circle(b); // return 값이 있는 경우
  cout << "원의 넓이는 " << c << " 입니다." << endl;

  int times, times2;
  cout << "정수를 입력하십시오" << endl;
  cin >> times;
  helloCPP(times, times2); // times, times2는 인자 (Argument)

  // 함수와 배열
  int arr[SIZE] = {1, // arr == &arr[0] 배열의 이름은 첫번째 원소의 주소
                   2,
                   4,
                   8,
                   16,
                   32,
                   64,
                   128};
  // cout << "size of arr " << sizeof arr << '\n'; // 32
  // int sum = sumArr(arr, SIZE);
  // cout << "함수의 총 합은 " << sum << " 입니다." << '\n';

  int sum = sumArr(arr, arr + SIZE);
  cout << "함수의 " << SIZE << "까지의 합은 " << sum << " 입니다." << '\n';

  sum = sumArr(arr, arr + 3);
  cout << "함수의 세번째 인덱스 까지의 합은 " << sum << " 입니다." << '\n';

  // 함수와 구조체
  // - 함수는 원본이 아닌 복사본을 대상으로 작업한다.
  // - 힘수는 배열을 return 할 수 없지만 구조체는 return 할 수 있다.
  // - 구조체의 규모가 커질 경우, 구조체를 복사하는데 시간이 걸리고 메모리에 대한 요구가 높아짐
  //  ㄴ 즉, 성능 저하 -> 값이 아닌 내용에 접근하는 포인터 OR 참조로 전달
  Time day1 = {5, 45};
  Time day2 = {4, 55};

  Time total = Tsum(&day1, &day2);
  cout << "이틀간 소요 시간: ";
  showTime(total);

  // 재귀함수
  // 재귀호출 : C++에서 함수는 자기 자신을 호출할 수 있다.
  // 재귀함수 : 재귀호출을 하는 함수

  // void recurs(argumentList) {
  //   //Code#1
  //   if (condition)
  //     recurs(argumentList);
  //   //Code#2
  // }

  // 재귀 함수가 호출되면 Code#2는 실행되지 않음
  countDown(5);

  // 함수를 지시하는 포인터
  // - 어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용할 수 있다.
  /*
  1. 함수의 주소를 얻는다.
  2. 함수를 지시하는 포인터를 선언한다.
  3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출한다.
  */
  cout << func; // 함수의 이름만 == 주소 출력

  int (*pf)(int);
  pf = func;
  cout << (*pf)(3) << endl; // 4

  return 0;
}

// 함수의 정의
void cheers(int n) {
  for (int i = 0; i < n; i++) {
    cout << "Cheers!" << endl;
  }
}

float circle(int x) {
  return x * x * PIE;
}

void helloCPP(int n, int m) { // n, m은 매개변수 (Parameter)
  for (int i = 0; i < n; i++) {
    cout << "Hello, C++!" << '\n';
  }
  for (int i = 0; i < m; i++) {
    cout << "Hello, C++!" << '\n';
  }
}

// int sumArr(int arr[], int n) {
//   int total = 0;
//   for (int i = 0; i < n; i++) {
//     total += arr[i];
//   }
//   return total;
// }
// int sumArr(int *arr, int n) {
//   cout << "size of arr " << sizeof arr << '\n'; // 8
//   int total = 0;
//   for (int i = 0; i < n; i++) {
//     total += arr[i];
//   }
//   return total;
// }
int sumArr(int *begin, int *end) {
  int total = 0;
  int *pt;
  for (pt = begin; pt != end; pt++) {
    total += *pt;
  }
  return total;
}

Time Tsum(Time *t1, Time *t2) { // parameter가 pointer
  Time total;
  // 값에서 멤버로 접근할 때: .
  // 주소에서 멤버로 접근할 때: ->
  total.mins = (t1->mins + t2->mins) % minsPerHr;
  total.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / minsPerHr;
  return total;
}

void showTime(Time t1) {
  cout << t1.hours << "시간, " << t1.mins << "분 입니다" << endl;
}

void countDown(int n) {
  cout << "Counting..." << n << endl;
  if (n > 0)
    countDown(n - 1);
  cout << n << "번쨰 재귀함수" << endl;
}

int func(int n) {
  return n + 1;
}