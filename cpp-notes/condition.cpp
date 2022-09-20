// 조건문

#include <iostream>
using namespace std;

int main() {
  // 분기 구문

  // if문: 조건이 참일 경우 실행
  // if (조건) {
  //   코드
  // }
  if (true)
    cout << "조건이 참입니다.";
  if (true) { // {} 블록 사용
    cout << "조건이";
    cout << " 참입니다.";
  }
  if (false)
    cout << "조건이 거짓입니다.";

  cout << "프로그램이 종료되었습니다." << '\n';

  // if - else문: 조건이 참일 경우 if문 내 코드 실행, 거짓일 경우 else 내 코드 실행
  if (false) {
    cout << "조건이";
    cout << " 참입니다." << endl;
  } else {
    cout << "조건이";
    cout << " 거짓입니다." << endl;
  }
  cout << "프로그램이 종료되었습니다." << '\n';

  if (false) {
    cout << "#1";
  } else {
    if (true) {
      cout << "#2";
    } else {
      cout << "#3";
    }
  }
  cout << "프로그램이 종료되었습니다." << '\n';

  // if - else if문: if문 조건이 false일 경우 else if문 조건이 true일 경우 else if문 실행
  if (false) {
    cout << "#1";
  } else if (true) {
    cout << "#2";
  } else {
    cout << "#3";
  }
  cout << "프로그램이 종료되었습니다." << '\n';

  // 논리 표현식
  // 논리합, 논리곱, 논리부정 연산자

  // 논리합 || (OR)
  /*
  5 == 5 || 5 == 9 // true
  5 > 3 || 5 > 10 // true
  5 > 8 || 5 < 10 // true
  5 > 9 || 5 < 2 // false
  */

  // 논리곱 && (AND)
  /*
  5 == 5 && 9 == 9 // true
  5 == 5 && 9 != 9 // false
  10 < 2 && 10 > 2 // false
  */

  // 논리부정 ! (NOT)
  // !(표현식): 반대
  cout << "당신의 나이를 입력하십시오.";
  int age;
  cin >> age;

  if (age < 0 || age > 100) {
    cout << "거짓말 하시면 안됩니다." << '\n';
  } else if (20 <= age && age <= 29) {
    cout << "당신은 20대 이군요?" << '\n';
  } else {
    cout << "당신의 나이를 잘 모르겠습니다." << '\n';
  }

  // switch문

  // switch (expression) {
  // case /* constant-expression */:
  //   /* code */
  //   break;

  // default:
  //   break;
  // }

  int a;
  cin >> a;
  switch (a) {
  case 1:
    cout << "입력하신 값은 1입니다.\n";
    break;
  case 2:
    cout << "입력하신 값은 2입니다.\n";
    break;
  case 3:
    cout << "입력하신 값은 3입니다.\n";
    break;
  default:
    cout << "입력하신 값은 1, 2, 3 이외의 다른 값입니다.\n";
    break;
  }
  cout << "switch 구문이 끝났습니다.\n";

  // break
  // - loop문을 끝냄

  // continue
  // - loop문을 처음으로 되돌림
  int i = 0;
  while (true) {
    cout << "i의 값은 " << i << " 입니다." << '\n';
    if (i > 10)
      break;
    i++;
  }
  cout << "while문이 끝났습니다.\n";

  const int SIZE = 30;
  cout << "문장을 입력하십시오.\n";
  char line[SIZE];
  cin.get(line, SIZE);
  cout << "입력하신 문장은\n";
  int space = 0;
  for (int i = 0; line[i] != '\0'; i++) {
    cout << line[i];
    if (line[i] != ' ')
      continue;
    space++;
  }
  cout << "입니다.\n";
  cout << "입력하신 문장에서 공백의 수는 " << space << "개 입니다.\n";
  cout << "while문이 끝났습니다.\n";

  return 0;
}