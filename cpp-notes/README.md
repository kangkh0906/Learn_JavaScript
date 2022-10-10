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

## 1. 변수 (Variable)
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
console>>
a = 5 b = 10
```
- 변수는 `자료형 이름;`으로 선언한다. `자료형 이름 = 값;`으로 초기화할 수 있다.
- 변수는 사용되기 전에 정의되어야 함.

## 2. 자료형 (Data type)
### 2.1 정수형 자료형과 실수형 자료형
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
  short n_short = SHRT_MAX;
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
console>>
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
- `float`, `double`, `long double`
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
console>>
3.14 3
```

### 2.2 문자형 자료형
<img alt="ASCII 코드표" src="http://www.vlsifacts.com/wp-content/uploads/2021/10/ASCII-Code.png">

- `char`: 작은 문자형
- ASCII Code에서 '한 단어'를 사용함.
- `'a'`와 같이 반드시 `'`를 사용해야함.
- null문자인 `\0` 때문
- `""`는 명시적으로 null문자를 포함 (`string`)

```cpp
#include <iostream>
using namespace std;

int main() {
  int a = 77;
  char b = a;
  cout << b << endl;
  
  b = 'a';
  cout << b << endl;
  return 0;
}
```
```
console>>
M
a
```

### 2.3 bool형 자료형
- `bool`: 0 혹은 1
- `0` 만 `0`, 나머지는 모두 `1`
- `0`은 `false`를, `1`은 `true`를 나타냄

```cpp
#include <iostream>
using namespace std;

int main() {
  bool a = 0;
  bool b = 1;
  bool c = 10;
  
  cout << a << ' ' << b << ' ' << c << endl;
  return 0;
}
```
```
console>>
0 1 1
```

### 2.4 const 제한자
- 바뀔 필요가 없는 수, 바뀌어서는 안되는 수를 `상수`라고 함
- `#define PIE 3.141592` (C style)
- `const float PIE = 3.141592;` (C++ style)
- c++에서는 자료형까지 선언한다는 차이점이 있음.
- 반드시 초기화의 방법으로만 선언 가능. 후에 변환이 불가능하기 때문

```cpp
#include <iostream>
using namespace std;
// #define PIE 3.141592

int main() {
  const float PIE = 3.141592;
  PIE = 1.234; // 상수는 변경이 불가능
  
  int r = 3;
  float s = r * r * PIE;
  
  int r2 = 3;
  float s2 = r2 * r2 * PIE;
  
  cout << s << ' ' << s2 << endl;
  
  return 0;
}
```
```
console>>
28.2743 28.2743
```

### 2.5 데이터형 변환
- 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
- 수식에 데이터형을 혼합하여 사용했을 때
- 함수에 매개변수를 전달할 때

강제적으로 데이터형을 변환하는 방법
- `typeName(a)` `(typeName)a`
- `static_cast<typeName>(a)`

```c++
#include <iostream>
using namespace std;

int main() {
  int a = 3.141592; // int형 데이터에 float형 데이터를 대입함 -> int형으로 변환
  cout << a << endl;
  
  char ch = 'M';
  cout << (int)ch << ' ' << int(ch) << ' ' << static_cast<int>(ch) << endl;
  
  return 0;
}
```
```
console>>
3
77 77 77
```

### 2.6 auto 자료형
- 변수의 자료형을 `초기값의 자료형`으로 정함
- 예상치 못한 오류가 발생할 수 있으므로 좋은 선택지는 아님

```c++
#include <iostream>
using namespace std;

int main() {
  auto a = 100;     // int
  auto b = 1.5;     // float
  auto c = 1.3e12L; // long long

  return 0;
}
```
```
console>>
3
77 77 77
```


## 3. 산술연산자 (Operator)
### 3.1 기본 연산자
> '+' : 두 개의 피연산자의 합을 계산한다.  
> '-' : 첫 번째 피연산자에서 두 번째 피연산자의 차를 계산한다.  
> '*' : 두 개의 피연산자의 곱을 계산한다.  
> '/' : 첫 번째 피연산자에서 두 번째 피 연산자를 나눈다. (두 개의 피연산자가 모두 정수이면 결과값은 '몫')  
> '%' : 첫 번째 피연산자를 두 번째 피연산자로 나눈 나머지를 구한다. (실수에서는 사용불가)

```c++
#include <iostream>
using namespace std;

int main() {
  int a = 10, b = 3;
  
  cout << "a + b = " << a + b << endl;
  cout << "a - b = " << a - b << endl;
  cout << "a * b = " << a * b << endl;
  cout << "a / b = " << a / b << endl;
  cout << "a % b = " << a % b << endl;
  
  return 0;
}
```
```
console>>
a + b = 13
a - b = 7
a * b = 30
a / b = 3
a % b = 1
```

### 3.2 복잡한 연산 수행
```c++
#include <iostream>
using namespace std;

int main() {
  int a = 10, b = 3, c = 5;
  
  cout << a / b * c << endl;
  
  return 0;
}
```
```
console>>
15
```
- 위에선 `10 / 3`의 몫인 `3`을 취하고 `3 * 5`를 수행해 `15`를 출력함.

## 4. 복합 데이터형 (Complex Data)
- C++은 복합데이터형을 제공
- 사용자 정의대로 새로운 데이터형을 만들 수 있다.
- 복합 데이터형: 기본 정수형과 부동소수점형의 조합

### 4.1 배열 (Array)
- 같은 데이터형의 집합
- `typeName arrayName[arraySize];`
- `index`를 이용해 값에 접근 가능
- `index`의 범위는 `0 ~ (배열의 크기 - 1)`

```c++
#include <iostream>
using namespace std;

int main() {
  int month[12];              // 배열의 선언
  int month1[12] = {1, 2, 3}; // 초기화

  cout << month[0] << endl; // index 사용

  return 0;
}
```
```
console>>
1
```
- 배열 원소에 대입할 값들을 콤마로 구분하여 중괄호로 묶어 선언한다.
- 초기화를 선언 이후에 나중에 할 수는 없다.
- 배열을 다른 배열에 통째로 대입할 수 없다.
- 초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공할 수 있다.
- 배열을 부분적으로 초기화하면, 나머지 원소들은 모두 0으로 설정한다. (첫 번째 원소만 0으로 초기화하면, 모두 0으로 초기화된다.)
- 배열을 초기화할 때 대괄호 속을 비워두면 컴파일러가 초기화 값의 개수를 배열의 크기로 저장한다.

### 4.2 문자열
- 문자의 열

#### 4.2.1 array를 사용한 문자열
```c++
#include <iostream>
using namespace std;

int main() {
  char a[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char b[] = "Hello";
  
  cout << a << endl;
  cout << b << endl;
  
  return 0;
}
```
```
console>>
Hello
Hello
```

#### 4.2.2 사용자 입력
- `cin`을 통해 입력받음
- ' '와 'enter'를 통해 값을 구분함

```c++
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  //사용자 입력
  const int Size = 15;
  char name1[Size];
  char name2[Size] = "C++programming";

  cout << "안녕하세요! 저는 " << name2;
  cout << "입니다! 성함이 어떻게 되시나요?\n";
  // cin >> name1;
  // cin.getline(name1, Size);
  cin.get(name1, Size);
  cout << "음, " << name1 << "씨, 당신의 이름은 ";
  cout << strlen(name1) << "자입니다만\n";
  cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다. \n";
  cout << "이름이 " << name1[0] << "자로 시작하는군요.\n";
  name2[3] = '\0';
  cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
  cout << name2 << endl;

  return 0;
}
```
```
console>>
안녕하세요! 저는 C++programming입니다! 성함이 어떻게 되시나요?
UserName
음, UserName씨, 당신의 이름은 8자입니다만
15 바이트 크기의 배열에 저장되었습니다.
이름이 U자로 시작하는군요.
제 이름의 처음 세 문자는 다음과 같습니다: C++
```

#### 4.2.3 string을 사용한 문자열
- C 스타일로 string 객체를 초기화할 수 있다
- `cin`을 사용하여 `string` 객체에 키보드 입력을 저장할 수 있다.
- `cout`을 사용하여 `string` 객체를 출력할 수 있다.
- 배열 표기를 사용하여 `string` 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.
- 배열은 다른 배열에 통째로 대입할 수 없지만 `string`은 가능하다.

```c++
#include <iostream>
using namespace std;

int main(){
  char char1[20];
  char char2[20] = "jaguar";
  string str1;
  string str2 = "panda";
  //char1 = char2; // 불가능
  str1 = str2; // 가능
  cout << str1 << endl;
  cout << str1[0] << endl;
  
  return 0;
}
```
```
console>>
panda
p
```

### 4.3 구조체 (Struct)
- 다른 데이터형이 허용되는 데이터의 집합
```c++
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

```
```
console>>
Son
Striker
183
77
0
1
```
- `struct structName {};` 형태로 구조체를 선언할 수 있다.
- `srtuctName myName;` 형태로 사용할 수 있다.
- `myName.memberName` 형태로 값에 접근할 수 있다.
- 구조체를 새로운 데이터타입으로 사용하는 배열을 사용할 수 있다.