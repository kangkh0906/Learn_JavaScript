# Function

# 1. 함수의 선언
# def 함수명(매개변수):
#     <함수 동작 구문>
#     ...
#     ...

# - def: 함수를 만들 때 사용하는 예약어
# - 매개변수: 인풋 값(parameter)
# - 파이썬에서 함수는 블록 단위로 구분하기에 콜론(:) 필수
# - 코드 블록: tab or 4 space

# def convert_to_celsius(fahrenheit):
# return (fahrenheit - 32) * 5 / 9
# -> error

def convert_to_celsius(fahrenheit):
    return (fahrenheit - 32) * 5 / 9
# -> no error


# 2. 함수 호출
# - 함수명() or 함수명(argument)
print(convert_to_celsius(212))  # 100.0

# 3. 매개변수(parameter)와 인자(argument)
# - 매개변수(parameter): 전달된 인자를 저장하는 변수
# - 인자(argument): 함수 호출 시 전달되는 값

# - line 18의 fahrenheit ->매개변수(parameter)
# - line 25의 212 -> 인자(argument)

# 4. 복수의 매개변수(parameter)를 넘기는 방법
# def function1(매개변수1, 매개변수2, ...):
#     <함수 동작 구문>
#     ...
#     ...

# function1(인자1, 인자2, ...)

# 5. 매개변수가 없는 함수
# def function1():
#     <함수 동작 구문>
#     ...
#     ...

# function1()

# 6. 리턴 값(Return Value)
# - 리턴 값은 return 키워드를 이용해 넘겨줌
# - return 키워드가 실행되면 함수는 종료됨


def function1():
    return 1
    return 2
    return 3

# - 함수는 오로지 하나의 결과값을 가지는 것이 원칙
# - 따라서 복수의 리턴 값을 넘겨줄 수 없음
# - 튜플(tuple)을 사용하여 둘 이상의 리턴 값 넘겨주기 가능
# - 리턴 값이 없는 함수도 가능

# 7. 디폴트 매개 변수(Default Parameter)
# - 함수의 매개 변수의 디폴트 값을 정해줄 수 있음
# - 디폴트 값이 정해진 매개 변수는 호출 시 인자를 입력하지 않아도 됨


def defaultParameter(param="param"):
    print(param)


defaultParameter()
defaultParameter("not default")
# -> param
#    not default


# - 매개 변수가 많은 경우 뒤의 매개 변수부터 디폴트 값 설정 가능
# - 디폴트 값은 연속으로 설정해야함


def defaultParameter(pa1="1", pa2="2", pa3="3"):
    print(pa1 + " " + pa2 + " " + pa3)


defaultParameter()
# -> 1 2 3


def defaultParameter(pa1, pa2="2", pa3="3"):
    print(pa1 + " " + pa2 + " " + pa3)


defaultParameter(1)
# -> 1 2 3


def defaultParameter(pa1, pa2, pa3="3"):
    print(pa1 + " " + pa2 + " " + pa3)


defaultParameter(1, 2)
# -> 1 2 3


def defaultParameter(pa1="1", pa2="2", pa3):
    print(pa1 + " " + pa2 + " " + pa3)


defaultParameter()
# -> Syntax Error


def defaultParameter(pa1="1", pa2, pa3="3"):
    print(pa1 + " " + pa2 + " " + pa3)


defaultParameter()
# -> Syntax Error
