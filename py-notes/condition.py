# Condition

# 1. if문
# - 조건문이 참일 경우 실행되는 코드 블록

# - 만약 ~ 라면
# - 조건문이 참(True)일 경우 코드 블록 진입

# if <조건문>:
#     <코드 구현>
#     ...
#     ...

list1 = []
list1.append(int(input("숫자를 입력하세요: ")))  # 5 입력
if list1[0] <= 10:
    print("10 이하의 숫자입니다.")
# -> 10 이하의 숫자입니다.

list1 = []
list1.append(int(input("숫자를 입력하세요: ")))  # 50 입력
if list1[0] <= 10:
    print("10 이하의 숫자입니다.")
# ->

# 2. if - else문

# - 만약 ~라면, 아니라면 ~
# - 조건문이 참(True)일 경우 if문 진입
# - 거짓(False)일 경우 else문 진입

# if <조건문>:
#     <코드 구현>
#     ...
#     ...
# else:
#     <코드 구현>
#     ...
#     ...

list1 = []
list1.append(int(input("숫자를 입력하세요: ")))  # 50 입력
if list1[0] <= 10:
    print("10 이하의 숫자입니다.")
else:
    print("10 이상의 숫자입니다.")
# -> 10 이상의 숫자입니다.

# 3. if - elif문

# - 만약 A라면, B라면 ~
# - 조건문A가 참(True)일 경우 if문 진입
# - 조건문B가 참(True)일 경우 elif문 진입

# if <조건문A>:
#     <코드 구현>
#     ...
#     ...
# elif <조건문B>:
#     <코드 구현>
#     ...
#     ...

list1 = []
list1.append(int(input("숫자를 입력하세요: ")))  # 5 입력
if list1[0] <= 10:
    print("10 이하의 숫자입니다.")
elif list1[0] >= 100:
    print("100 이상의 숫자입니다.")
# -> 10 이하의 숫자입니다.

list1 = []
list1.append(int(input("숫자를 입력하세요: ")))  # 500 입력
if list1[0] <= 10:
    print("10 이하의 숫자입니다.")
elif list1[0] >= 100:
    print("100 이상의 숫자입니다.")
# -> 100 이상의 숫자입니다.

list1 = []
list1.append(int(input("숫자를 입력하세요: ")))  # 50 입력
if list1[0] <= 10:
    print("10 이하의 숫자입니다.")
elif list1[0] >= 100:
    print("100 이상의 숫자입니다.")
# ->

# !조건문A와 조건문B를 모두 만족하는 경우?
list1 = []
list1.append(int(input("숫자를 입력하세요: ")))  # 50 입력
if list1[0] >= 10:
    print("10 이상의 숫자입니다.")
elif list1[0] <= 100:
    print("100 이하의 숫자입니다.")
# -> 10 이상의 숫자입니다.
# - 참인 조건문을 만나면 코드 실행 후 제어 흐름 중단

# 4. if - elif - else문

# - 만약 A라면, B라면, 둘 다 아니라면 ~
# - 조건문 중 참인 조건문의 블록을 실행
# - 참인 조건문이 없다면 else문 실행

# if <조건문A>:
#     <코드 구현>
#     ...
# elif <조건문B>:
#     <코드 구현>
#     ...
# else:
#     <코드 구현>
#     ...

list1 = []
list1.append(int(input("숫자를 입력하세요: ")))  # 5 입력
if list1[0] <= 10:
    print("10 이하의 숫자입니다.")
elif list1[0] > 10 and list1[0] <= 100:
    print("10 초과 100 이하의 숫자입니다.")
else:
    print("100 초과의 숫자입니다.")
# -> 10 이하의 숫자입니다.

list1 = []
list1.append(int(input("숫자를 입력하세요: ")))  # 50 입력
if list1[0] <= 10:
    print("10 이하의 숫자입니다.")
elif list1[0] > 10 and list1[0] <= 100:
    print("10 초과 100 이하의 숫자입니다.")
else:
    print("100 초과의 숫자입니다.")
# -> 10 초과 100 이하의 숫자입니다.

list1 = []
list1.append(int(input("숫자를 입력하세요: ")))  # 500 입력
if list1[0] <= 10:
    print("10 이하의 숫자입니다.")
elif list1[0] > 10 and list1[0] <= 100:
    print("10 초과 100 이하의 숫자입니다.")
else:
    print("100 초과의 숫자입니다.")
# -> 100 초과의 숫자입니다.

# 5. if - elif - elif - ... - else문

# - elif의 개수는 자유

# if <조건문A>:
#     <코드 구현>
#     ...
# elif <조건문B>:
#     <코드 구현>
#     ...
# elif <조건문C>:
#     <코드 구현>
#     ...
# ...
# else:
#     <코드 구현>
#     ...
