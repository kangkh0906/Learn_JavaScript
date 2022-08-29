# Variable & Data Types
# 변수명은 띄어쓰기 사용불가
# 숫자로 시작 불가능
# snake_type 많이 사용함

# 변수 선언
# variable_name = value

# 1. Nonetype
nonetype = None

# 2. Int
int_type = 1

# 3. Float
float_type = 1.0

# 4. Boolean / Bool
# only True or False (true or false -> Nope)
bool_type = True
bool_type = False

# 5. String
str_type = "str type"

# 6. List
list_type = [1, 2, 3]

# 7. Complex
complex_type = 1 + 2j

# 8. Tuple
tuple_type = (1, 2, 3)

# 9. Dict
dict_type = {"key": "value"}


# 10. 형변환
# - 변수의 자료형을 유사한 자료형으로 변환하는 것
# - 변환할자료형()

# int()
# - int(float): float -> int
int(3.14)  # 3
# - int(bool): bool -> int
int(True)  # 1
# - int(string): string -> int (문자열이 숫자로만 이루어져 있을 때 사용 가능)
int("123")  # 123

# float()
# - float(int): int -> float
float(3)  # 3.0
# - float(bool): bool -> float
float(True)  # 1.0
# - float(string): string -> float (문자열이 숫자로만 이루어져 있을 때 사용 가능)
float("123")  # 123.0

# str()
# - str(int): int -> string
str(3)  # "3"
# - str(float): float -> string
str(3.14)  # "3.14"
# - str(bool): bool -> string
str(True)  # "True"

# chr()
# - chr(int): int -> char(유니코드)
chr(65)  # "A"
# - chr(bool): bool -> chr
chr(False)  # NULL

# ! 아스키코드
# - 숫자만 표현 가능한 컴퓨터에서 문자를 표현하기 위해 만든 테이블
# - 숫자 하나에 문자 하나를 대응
# - 특수문자, 이스케이프 문자, 화이트캐릭터, 알파벳 등 포함
# - 총 128개의 문자 -> 영어 이외의 문자 표현 불가능

# ! 유니코드
# - 아스키코드의 한계를 해결
# - U+0000 ~ U+FFFF (16^4)개의 문자 표현
# - 아스키코드 + 다양한 언어 표현 가능
# - 파이썬에서는 유니코드를 사용
