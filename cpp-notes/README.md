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

### 1.2 자료형

#### 1.2.1 정수형 자료형과 실수형 자료형

<img width="891" alt="스크린샷 2022-10-10 17 56 01" src="https://user-images.githubusercontent.com/108459576/194831638-d20dfd3c-0adb-47ff-ace9-3018d321a56c.png">

- 정수형: 소수부가 없는 수
- 음의 정수, 0, 양의 정수
- `short`, `int`, `long`, `long long`
- `unsigned`를 이용해 음의 영역을 사용하지 않아 더 큰 값을 저장할 수 있음.

```cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {
  int n_int = INT_MAX;
  short n_short = SHORT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  cout << "int는 " << sizeof n_int << "바이트" << endl;
  cout << "이 바이트의 최대값은 " << n_int << endl;
  
  cout << "short는 " << sizeof n_short << "바이트" << endl;
  cout << "이 바이트의 최대값은 " << n_short << endl;

  cout << "long은 " << sizeof n_long << "바이트" << endl;
  cout << "이 바이트의 최대값은 " << n_long << endl;

  cout << "long long은 " << sizeof n_llong << "바이트" << endl;
  cout << "이 바이트의 최대값은 " << n_llong << endl;
  
  unsigned short a = -1;
  cout << a << endl; // 값의 범위를 벗어나 반대편으로 이동함
  
  return 0;
}
```
```
console >
int는 4바이트
이 바이트의 최대값은 2147483647
short는 2바이트
이 바이트의 최대값은 32767
long은 4바이트
이 바이트의 최대값은 2147483647
long long은 8바이트
이 바이트의 최대값은 9223372036854775807
65535
```

<img width="872" alt="스크린샷 2022-10-10 18 10 44" src="https://user-images.githubusercontent.com/108459576/194833071-7b3d2090-77da-4a84-84e2-fc621fb178fc.png">

- 실수형: 소수부가 있는 수
- `float`, `double`
```cpp
#include <iostream>
using namespace std;

int main() {
  float a = 3.14;
  int b = 3.14; // 소수점이 버려짐
  
  cout << a << ' ' << b << endl;
  
  return 0;
}
```
```
console >
3.14 3
```
