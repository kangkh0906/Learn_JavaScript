import copy
# List
# - 선언할 대 크기 지정 불필요
# - 효율적인 데이터 삽입, 삭제
# - 다양한 메소드 존재
# - 요소 수정이 가능 (mutable)

# 1. 리스트 생성
list_a = []  # 빈 리스트 생성
list_b = [1, 2, 3]  # 크기가 3인 리스트 생성

# 2. 데이터 삽입
# append()
# - 리스트의 마지막에 데이터를 추가함
# - list_name.append(data)
list_a.append(4)
print(list_a)  # [4]

# insert()
# - 리스트의 원하는 인덱스에 데이터 저장
# - 크기보다 큰 인덱스는 저장 불가
# - list_name.insert(index_number, data)
list_b.insert(1, 10)
print(list_b)  # [1, 10, 2, 3]

# extend()
# - 리스트의 마지막에 리스트를 추가함
# - 저장할 인덱스 지정 불가능
# - list_name1.extend(list_name2)
list_a.extend(list_b)
list_a.extend([4, 5, 6])
print(list_a)  # [4, 1, 10, 2, 3, 4, 5, 6]

# +
# - extend()와 유사
# - 곱셈(*) 연산도 가능
# - list_c = list_a + list_b

# 3. 데이터 삭제
# del
# - 메소드가 아닌 키워드
# - 인덱스 번호를 이용해 요소 삭제
# - del list_name[index]
del list_a[1]

# remove()
# - 데이터 값을 이용해 요소 삭제
# - 찾을 데이터가 없으면 에러 발생
# - list_name.remove(data)
list_a.remove(2)

# pop()
# - 리스트의 가장 마지막 요소 삭제
# - 삭제하기 전 마지막 요소를 가져옴
# - list_name.pop()
list_c = [1, 2, 3, 4, 5, 6, 7]
print(list_c.pop())  # 7
print(list_c)  # [1, 2, 3, 4, 5, 6]

# 4. 리스트 인덱싱
# - 0 부터 진행
# - 음수는 뒤부터 진행
print(list_c[0])  # 1
print(list_c[2] + list_c[5])  # 9
# print(list_c[6])  # error
print(list_c[-1])  # 6

# 5. List of Lists
# - 리스트를 요소로 가진 리스트
a = [1, 2, [3, 4, 5]]
# a[2] = [3, 4, 5]
# a[2][0] = 3
# a[2][1] = 4
# a[2][2] = 5

# 6. 리스트 슬라이싱
# - 리스트를 자르고 나눔
# - list_name[start:end]
a = [1, 2, 3, 4, 5, 6, 7]
print(a[5:7])
# a[2:6] = [3, 4, 5, 6]
# a[0:3] = a[:3] = [1, 2, 3]
# a[5:7] = a[5:] = [6, 7]

# 7. 리스트 복사
# 얕은 복사 vs 깊은 복사
# - Mutable type은 깊은 복사, 얕은 복사 가능 (e.g. list, dict, set)
# - Immutable type은 깊은 복사만 가능

# 얕은 복사
# - 객체의 주소 값을 복사
list_a = [1, 2, 3]
list_b = list_a
list_b[1] = 4
print(list_a, list_b)  # [1, 4, 3] [1, 4, 3]

# 깊은 복사
# - 객체의 실제 값을 복사
list_a = [1, 2, 3]
list_b = copy.deepcopy(list_a)  # import copy
list_b[1] = 4
print(list_a, list_b)  # [1, 2, 3] [1, 4, 3]

# 슬라이싱을 이용한 복사 1
list_a = [1, 2, 3]
list_b = list_a[:]
list_b[1] = 4
print(list_a, list_b)  # [1, 2, 3] [1, 4, 3]

# 슬라이싱을 이용한 복사 2
# - 얕은 복사(feat. 눈속임)
list_a = [1, 2, [3, 4, 5]]
list_b = list_a[:]
list_b[2].append(6)
print(list_a, list_b)  # [1, 2, [3, 4, 5, 6]] [1, 2, [3, 4, 5, 6]]
