# Loop

# 1. 반복문
# - 같은 동작을 반복하는 구문 (for문, while문)

# input()을 이용한 list append
from itertools import count


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

# - 같은 동작을 반복
# - 보다 효율적인 코드 작성

# 2. for문
# - ~하는 동안

# for item in list:
#     <반복 동작 구문>
#     ...
#     ...

# - item에 리스트 안 요소를 받음
# - 동작 구문이 끝나면 item은 list의 다음 요소를 받음
# - 다음 요소가 없으면 for문 종료

list1 = [1, 2, 3, 4, 5]
for i in list1:
    print(i, end=" ")
# -> 1 2 3 4 5

# range()
# - 리스트를 자동으로 만들어주는 함수
# range(start, stoop, step)
# - start: 시작 값
# - stop: 끝 값, 포함 안됨
# - step: 증감 값, default = 1
# - return value: list, [start, start + step, ..., stop - step]

# for문을 이용한 list append
list1 = []  # 3개의 값 입력

for i in range(0, 3):  # range(0, 3) == [0, 1, 2]
    list1.append(input(str(i) + "번 인덱스: "))

print(list1)
# -> ['1', '2', '3']

# 3. 2중 for문
# 구구단 1~9단 출력
for i in range(1, 10):
    for j in range(1, 10):
        print(i, "*", j, "=", i*j)

# 4. while문
# - ~ 하는 동안

# while <조건문>:
#     <반복 동작 구문>
#     ...
#     ...

# - 조건문이 참(True)인 동안 반복
# - 조건문: 연산 값이 bool 타입

# example
list1 = [1, 2, 3, 4, 5]
i = 0
while i < 5:
    print(list1[i])
    i += 1
# -> 1 2 3 4 5

# while문을 이용한 list append
list1 = []  # 3개의 값 입력
while len(list1) < 3:
    list1.append(input(str(i) + "번 인덱스: "))
print(list1)
# -> ['1', '2', '3']

# 5. while 무한 루프
# - 루프가 끝나지 않는 경우, 논리 오류(Logical Error)
# - 오류를 발생시키지 않기 위해서는 break를 이용해 탈출해주어야 함
while True:
    print("무한 루프")
# -> 무한 루프
# 무한 루프
# 무한 루프
# 무한 루프
# ...

# "무한 루프"를 5번 출력
# - for문을 이용하면 간단
count = 0
while True:
    print("무한 루프")
    count += 1
    if count == 5:
        break
# -> 무한 루프 무한 루프 무한 루프 무한 루프 무한 루프

# 언제 무한 루프를 사용할까?
# - 반복 횟수를 정확하게 모르는 경우
#   ㄴ 반복 종료 결정권이 사용자(User)에게 있는 경우 (e.g. Q를 입력할 때까지 반복하라. / 돈을 다 사용할 때까지 반복하라.)
# - 반복 횟수가 동적(Dynamic)인 경우
#   ㄴ 반복 종료 결정권이 사용자(User)에게 있는 경우 (e.g. Q를 입력할 때까지 반복하라. / 돈을 다 사용할 때까지 반복하라.)
# - 데이터에 비연속적으로 접근할 경우
#   ㄴ 이진 탐색 등의 일부 알고리즘

# !이진탐색
# - 정렬되어 있는 리스트에서 특정 값을 찾아내는 탐색 법
# - 처음부터가 아닌 중간부터 탐색을 시작하며 찾는 값과 요소의 값의 대소를 비교해 탐색

# 6. break와 continue
# - break: 제어 흐름 완전 중단(루프 탈출)
# - continue: 제어 흐름 유지, 코드 실행 건너뜀(루프 유지)

# break example
list1 = [1, 2, 3, 4, 5]
for i in list1:
    print(i, end=" ")
    break  # 루프 탈출
# -> 1

# continue example
list1 = [1, 2, 3, 4, 5]
for i in list1:
    print("continue", end=" ")
    continue
    print(i, end=" ")  # 실행 X
# -> continue continue continue continue continue
