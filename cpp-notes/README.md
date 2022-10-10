# C++ 노트

## 0. C++ 시작하기

```cpp
#include <iostream> // 전처리 지시자
using namespace std; // ';' 종결자

int main() {
  cout << "Hello World!" << endl;
  return 0;
}
```
- c++에서 함수를 사용하고자 하면 반드시 그 함수의 원형을 미리 정의해야 함.
   - `cout`의 경우 전처리 지시자에서 정의됨.
- `;`은 종결자 역할을 함.
- `main` 함수가 반드시 있어야 함.
- `cout`: console out / `endl`: end line
- `using namespace std;`에서 `std::`를 생략할 수 있게 해줌.
- `//` 또는 `/*문장*/` 으로 주석을 달 수 있음.

## 1. 변수

> 변수는 변할 수 있는 수  
> cf) 상수는 변할 수 없는 수

- 변수 선언의 규칙
  1. 숫자로 시작할 수 없다.
  2. c++에서 사용하고 있는 키워드는 사용할 수 없다.
  3. white space를 사용할 수 없다.

### 1.1 변수의 선언

```cpp
#include <iostream>
using namespace std;

int main() {
  int a; // 변수의 선언
  a = 7; // 대입

  int b = 3; // 초기화

  a = 5;
  b = 10;

  cout << "a = " << a << " b = " << b << endl;

  return 0;
}
```
```
console >
a = 5 b = 10
```
- 변수는 `자료형 이름;`으로 선언한다. `자료형 이름 = 값;`으로 초기화할 수 있다.
- 변수는 사용되기 전에 정의되어야 함.

