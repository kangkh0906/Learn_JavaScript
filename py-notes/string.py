# String
# - 문자의 나열
# - 인덱싱, 슬라이싱 가능
# - 요소 수정 불가능(immutable)
# - 다양한 메소드 존재

# 1. String
# - 여러 형태로 가능
from ntpath import join


print("This is String")
print('This is String')
print("""This is String""")
print('''This is String''')

# 2. "와 ' 구분
str = "Python's string"
str = 'Python's string'
# -> error

# \' => 이스케이프 문자
str = 'Python\'s string'

# 이스케이프 문자
# \b -> Back space
# \t -> Tab
# \n -> Linefeed
# \' -> Single quote
# \" -> Double quote
# \\ -> Backslash
# \f -> Formfeed
# \r -> Carriage return

# 3. 라인 내 줄바꿈(Linefeed) 표현 불가
str = "This is
Linefeed"
# -> error

# Solution 1
# - 이스케이프 문자 사용
str = "This is\nLinefeed"
# Solution 2
# - 삼중 따옴표 사용
str = """This is
Linefeed"""

# 4. 문자열 연산
str1 = "Hello"
str2 = " World!"
str3 = str1 + str2  # str3 = "Hello World!"

str1 = "Python"
str2 = str1 * 3  # str2 = "PythonPythonPython"

# 5. 수정 불가능(immutable)
# - 문자열은 immutable type이므로 요소 수정이 불가능
str = "Pithon"
str[1] = "y"
# -> error

# 6. 문자열 수정
# 문자열 재정의 1
str = "Pithon"
str = "Python"
# 문자열 재정의 2
str = "Pithon"
temp = "Python"
str = temp

# 슬라이싱, 문자열 더하기를 이용한 문자열 재정의
str = "Pithon"
str = str[:1] + "y" + str[2:]
# -> str = "Python"
# str[:1] = "P"
# str[2:] = "thon"

# replace()
# - string 메소드 replace()
# - string.replace(old, new, [count])
# - old: 현재 문자열에서 변경하고 싶은 문자 or 문자열
# - new: 새로 바꿀 문자 or 문자열
# - count: 변경할 횟수 (기본값 -1 = 문자열 전체)
str = "Pithon"
str.replace("i", "y")
# -> str = "Python"

str = "oxoxoxox"
str.replace("ox", "*")
# -> str = "****"

str = "oxoxoxox"
str.replace("ox", "*", 1)
# -> str = "*oxoxox"

# 리스트로 변환 후 수정
# - 리스트는 수정 가능(mutable)하므로 문자열 리스트로 변환하여 사용하는 경우가 많음
str = "Hello World"
list = list(str)
# -> list = ["H", "e", "l", "l", "o", " ", "W", "o", "r", "l", "d"]

list[5] = "@"
# -> list = ["H", "e", "l", "l", "o", "@", "W", "o", "r", "l", "d"]

# list를 str로 변환 불가능
str = str(list)
# -> error

# Solution
str = "".join(list)
# -> str = "Hello@World"

# join()
# - '구분자'.join(list)
# - join(): 리스트의 요소를 합쳐 문자열로 변환
# - 구분자: 요소들을 구분하는 문자
list = ['a', 'b', 'c']
str1 = "".join(list)
# -> str1 = "abc"

str2 = "_"join(list)
# -> str2 = "a_b_c"

# 6. 문자열 내 변수 표현
how_many_apples = 3
str = "I ate " + str(how_many_apples) + " apples"
# -> str = "I ate 3 apples"

# 문자열 포맷팅
str = "I ate %d apples" % how_many_apples
# -> str = "I ate 3 apples"
str = "I ate %s apples" % "three"
# -> str = "I ate three apples"
str = "I ate %d apples and %d bananas" % (3, 5)
# -> str = "I ate 3 apples and 5 bananas"

# 포맷 코드
# %d -> Integer
# %s -> String
# %f -> Float
# %c -> Character
# %o -> Octal number
# %x -> Hexadecimal
