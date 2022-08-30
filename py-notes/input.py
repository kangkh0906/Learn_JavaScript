# Input

# 1. 입력함수 input()
# input(string)
# string: 화면에 출력하고 싶은 문자열

print("숫자를 하나 입력하세요: ", end=' ')
a = input()
print("숫자는 ", a, "입니다.")
# -> 숫자를 하나 입력하세요: 3
#    숫자는 3입니다.

a = input("숫자를 하나 입력하세요: ")
print("숫자는 ", a, "입니다.")
# -> 숫자를 하나 입력하세요: 3
#    숫자는 3입니다.

# 2. 입력값의 타입
# - string으로 입력되기 때문에 데이터 타입을 바꿔줄 필요가 있음
a = input("숫자를 하나 입력하세요: ")
print(type(a))
# -> <class 'str'>

# Problem
a = input("숫자를 하나 입력하세요: ")  # 1
b = input("숫자를 하나 입력하세요: ")  # 2
print(a + b)
# -> 12

# Solution
a = int(input("숫자를 하나 입력하세요: "))  # 1
b = int(input("숫자를 하나 입력하세요: "))  # 2
print(a + b)
# -> 3

# 3. input()을 이용한 list append
list1 = []  # 3개의 값 입력
a = input("0번 인덱스: ")  # 1
list1.append(a)
a = input("1번 인덱스: ")  # 2
list1.append(a)
a = input("2번 인덱스: ")  # 3
list1.append(a)

print(list1)
# -> ['1', '2', '3']

list1 = []  # 3개의 값 입력
list1.append(input("0번 인덱스: "))
list1.append(input("1번 인덱스: "))
list1.append(input("2번 인덱스: "))
print(list1)
# -> ['1', '2', '3']
