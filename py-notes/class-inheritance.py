# Class Inheritance

# - 다른 클래스와 겹치는 부분이 많음 => 비효율적
# - 사용자가 클래스의 멤버 변수를 임의로 지정 가능 => 보안에 취약

# - 말 그대로 클래스를 상속함(물려줌)
# - 상속하는 클래스: 부모 클래스(Parent, Super)
# - 상속받는 클래스: 자식 클래스(Child, Sub)
# - 부모 클래스를 상속받은 자식 클래스는 부모 클래스의 멤버들에게 접근 가능

# 1. 클래스 상속 방법
# - 자식 클래스 정의 시 클래스 이름 옆 괄호에 부모 클래스 이름 입력
# class 부모클래스:
#   ...클래스 정의...
#
# class 자식클래스(부모클래스):
#   ...클래스 정의...

# 2. 클래스 기능 추가/수정
# - 자식 클래스는 부모 클래스에 기능 추가 가능
# - 기능 추가와 더불어 기능 수정도 가능

class Country:
    name = "Country name"
    population = "Country population"
    capital = "Country capital"


class Korea(Country):
    def __init__(self, _name):
        self.name = _name

    def showName(self):
        print(self.name)


kr = Korea('Korea')
kr.showName()
# -> Korea


class Country:
    name = "Country name"

    def show(self):
        print(self.name)


class Korea(Country):
    def __init__(self, _name, _pop, _cap):
        self.name = _name
        self.pop = _pop
        self.cap = _cap

    def show(self):  # 메소드 오버 라이딩(Overriding)
        print(self.name, " ", self.pop, " ", self.cap)


kr = Korea("Korea", 50000000, "Seoul")
kr.show()
# -> Korea 50000000 Seoul

# 네임스페이스(namespace)
# - 프로그래밍 언어에서 특정한 객체를 이름에 따라 구분할 수 있는 범위
# Built-in Namespace > Module: Global Namespace > Function: Local Namespace

# 3. 메소드 오버 라이딩(Overriding)
# - 부모 클래스에 있는 메소드를 동일한 이름으로 다시 만드는 것
#   ㄴ 기존 부모 클래스의 메소드 내용을 덮어 씌움
# - 메소드 재정의
# - 부모 클래스와 자식 클래스에 동일 이름 메소드가 존재할 시 자식 클래스 메소드가 호출됨

# - 서로 다른 클래스에 같은 이름의 메소드 존재


class Parent:
    def overriding(self):
        print("Parent")


class Child(Parent):
    def overriding(self):
        print("Child")

# 4. 메소드 오버 로딩(Overloading)
# - 한 클래스에 있는 메소드를 동일한 이름으로 다시 만드는 것
#   ㄴ 파라미터만 다르게 재정의
# - 호출시 입력되는 인자를 파라미터로 받는 메소드가 호출됨

# - 하나의 클래스에 이름은 같고 파라미터가 다른 메소드 존재


class test:
    def overloading(self):
        print("None")

    def overloading(self, x):
        print(x)

# - 파이썬은 오버 로딩을 지원하지 않음
# - 오버 로딩 시 가장 마지막에 정의한 메소드만 호출됨

# 5. super()
# - 부모 클래스를 호출하는 함수
# super(자식 클래스 이름, 객체)
# - 자식 클래스 내부에서 super() 호출 시 인자는 자동으로 자식 클래스 이름, 객체가 전달됨


class Country:
    name = "Country name"

    def show(self):
        print(self.name, end=" ")


class Korea(Country):
    def __init__(self, _name, _pop, _cap):
        self.name = _name
        self.pop = _pop
        self.cap = _cap

    def show(self):
        super().show()
        print(self.pop, " ", self.cap)


kr = Korea("Korea", 50000000, "Seoul")
kr.show()
# -> Korea 50000000 Seoul


class Country:
    def __init__(self, _name):
        self.name = _name

    def show(self):
        print(self.name, end=" ")


class Korea(Country):
    def __init__(self, _name, _pop, _cap):
        super().__init__(_name)
        self.pop = _pop
        self.cap = _cap

    def show(self):
        super().show()
        print(self.pop, " ", self.cap)


kr = Korea("Korea", 50000000, "Seoul")
kr.show()
# -> Korea 50000000 Seoul

# 6. mro()
# - 클래스의 상속 관계를 확인하는 메소드
# - 객체로 호출하는 것이 아닌 클래스로 호출함

# e.g.
# class Test:
#     ...
#
# tst = Test()
# print(tst.mro())
# -> error
#
# print(Test.mro())
# -> (상속 관계 출력)


class Country:
    def __init__(self, _name):
        self.name = _name

    def show(self):
        print(self.name, end=" ")


class Korea(Country):
    def __init__(self, _name, _pop, _cap):
        super().__init__(_name)
        self.pop = _pop
        self.cap = _cap

    def show(self):
        super().show()
        print(self.pop, " ", self.cap)


print(Korea.mro())
# -> [<class '__main__.Korea'>, <class '__main__.Country'>, <class 'object'>]
print(Country.mro())
# -> [<class '__main__.Country'>, <class 'object'>]

# 7. object class
# - 파이썬 내 최상위 클래스
# - 모든 클래스는 object 클래스를 상속받음
# - 클래스의 기본 메소드들(매직 메소드)이 정의되어 있음
#   ㄴ 클래스 정의시 매직 메소드를 정의하지 않아도 사용 가능한 이유

# - 최상위 클래스이므로 부모클래스 X
print(object.mro())
# -> [<class 'object>]

# dir(): 클래스가 가진 멤버(멤버 변수, 메소드)를 출력하는 함수
# - object class가 __init__, __str__ 등을 가지고 있음을 알 수 있음
obj = object()
print(dir(obj))
# -> ['__class__', '__delattr__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__']
