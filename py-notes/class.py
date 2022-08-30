# Class
# - 객체를 만드는 '틀'
# - 객체: 클래스로 만들어낸 고유의 특성을 지닌 인스턴스
# -> 클래스: 쿠키 틀, 객체: 틀로 찍어낸 쿠키

# Problem
# - 학생에 대한 정보를 저장, 응용하는 프로그램
# - 필요한 데이터:
# - 이름, 학번, 학과, 전화번호, 이메일, etc..
# - 학생 1명당 필요한 데이터, 인원 수가 많을 수록 만들어야할 변수가 많아짐

# in C
# - 구조체를 사용해 이 문제를 해결
# - 구조체: 다양한 변수를 가지고 있는 하나의 자료형 (객체X)
# Student 구조체 (이름, 학번, 학과, 전화번호, 이메일, etc..)
# Student stud;
# stud.name = ~
# stud.id = ~
# ...

# in C++
# - C++에서는 구조체를 클래스로 발전
# - 구조체: 변수만 멤버로 가짐 -> 함수는 멤버로 가지지 못함
# - 클래스: 변수 뿐 아니라 함수도 멤버로 가짐
# Student 클래스 (이름, 학번, 학과, 전화번호, 이메일, etc.., 개인정보 저장 함수, 개인정보 편집 함수, 성적 관리 함수)
# Student stud;
# stud.name = ~
# stud.id = ~
# ...

# - 복수의 멤버 변수, 멤버 함수를 가지는 사용자 정의 자료형
# - 클래스로 만든 객체들은 같은 포맷(format)을 가지나,
# - 각 개체들은 서로 구별되는 고유의 값을 가짐

# 1. 기본 자료형과 클래스 자료형
# - 기본 자료형과 다르게 메소드(method)를 가짐

a = 10  # int형: int a - 숫자


class BusinessCard:  # class: 명함 m1 - 주소 - 데이터
    name = "홍길동"
    cp = "010-1234-5678"


bc = BusinessCard()

# - 기본 자료형은 출력 시 저장된 값을 출력하지만 클래스 자료형은 출력시 해당 객체의 주소를 출력함
print(a)  # 10
print(bc)  # <__main__.BusinessCard object at 0x7fc2e89a07f0>


# 2. 멤버 변수
# - 클래스 내에서 정의된 변수 (이름, 학번, 학과, 전화번호, 이메일, etc..)


class BusinessCard:
    name = "홍길동"  # string 타입 멤버 변수
    cp = "010-1234-5678"  # string 타입 멤버 변수

# - 멤버 변수도 초기화를 하지 않을 경우 쓰레기 값이 저장됨 -> 변수의 초기화는 필수


# 3. 멤버 함수(메소드)
# - 클래스 내에서 정의된 함수 (개인정보 저장 함수, 개인정보 편집 함수, 성적 관리 함수, etc..)
# - 객체를 통해 접근 가능

# 객체.메소드(매개변수)

# - Python의 모든 자료형은 객체
# - 모든 자료형은 각 타입에 유용한 동작을 하는 메소드를 가지고 있음
#   e.g. string의 replace(), count(), etc...
#        list의 remove(), len(), etc...


class BusinessCard:
    name = "홍길동"
    cp = "010-1234-5678"

    def changeName(self, newName):
        self.name = newName

    def changeCp(self, newCp):
        self.cp = newCp

# self
# - 인스턴스 자신
# - 메소드를 호출하는 객체가 self로 전달됨


bc1 = BusinessCard()
bc2 = BusinessCard()
bc1.changeName("전우치")
print(bc1.name + " " + bc2.name)
# -> 전우치 홍길동

# 4. 생성자(Constructor)
bc = BusinessCard()  # bc 라는 이름의 BusinessCard 클래스의 객체를 생성함
bc.changeName("전우치")  # 객체 bc의 멤버 변수 name의 값을 변경
bc.changeCp("010-1111-2222")  # 객체 bc의 멤버 변수 cp의 값을 변경
# -> 클래스 사용자의 입장에서 불편함

# - 생성자는 멤버 변수의 초기화를 위한 메소드
# - 객체 생성시 자동으로 호출
# - 객체 생성시 매개변수로 값을 주면 그 값으로 멤버 변수를 초기화


class BusinessCard:
    def __init__(self, _name="홍길동", _cp="010-1234-5678"):  # 디폴트 매개 변수
        self.name = _name
        self.cp = _cp


bc1 = BusinessCard()
bc2 = BusinessCard("전우치", "010-1111-2222")

print(bc1.name + " " + bc1.cp)
# -> 홍길동 010-1234-5678
print(bc2.name + " " + bc2.cp)
# -> 전우치 010-1111-2222

# 5. 매직 메소드
# - __(something)__을 이름으로 가지는 메소드
# - Python 내부에 구현된 빌트인 메소드
#   ㄴ 따로 만들지 않아도 이미 원형이 있음 (상속 개념)
# - 메소드 호출 방법(.)으로 호추루도 가능하나, 주로 . 없이 호출됨
#   e.g. 객체를 생성할 때, 객체를 출력할 때
# 즉, 생성자도 매직 메소드

# 자주 사용하는 매직 메소드
# __init__
# - 생성자, 객체 생성 시 호출

# __str__
# - 객체 출력 시 주소값이 아닌 원하는 값 출력 가능, 객체 print시 호출

# __add__, __sub__, __mul__
# - 객체 연산자, 객체 간의 연산을 할 때 호출
#   e.g. bc1 + bc2, bc1 - bc2, bc1 * bc2


class BusinessCard:
    def __init__(self, _name="홍길동", _cp="010-1234-5678"):  # 디폴트 매개 변수
        self.name = _name
        self.cp = _cp

    def __str__(self):
        return "이름: " + self.name + ", 전화번호: " + self.cp

    def __add__(self, other):
        return self.name + "와(과) " + other.name


bc1 = BusinessCard()
bc2 = BusinessCard("전우치", "010-1111-2222")

print(bc1)
# -> 이름: 홍길동, 전화번호: 010-1234-5678
print(bc2)
# -> 이름: 전우치, 전화번호: 010-1111-2222
print(bc1 + bc2)
