# Dict
# -

# 1. 딕셔너리 생성
# key: value
player = {
    'name': 'KH',
    'age': 20,
    'alive': True,
    'fav_food': ["Pizza", "Burger"]
}

# 2. 메소드
# get
# - key의 value를 받음
print(player.get('age'))
# -> 20
print(player.get('fav_food'))
# -> ["Pizza", "Burger"]
print(player['fav_food'])
# -> ["Pizza", "Burger"]

# clear
# - 내용을 모두 지움
player.clear()
print(player)

# pop
# - key의 data를 제거함
player = {
    'name': 'KH',
    'age': 20,
    'alive': True,
    'fav_food': ["Pizza", "Burger"]
}
player.pop('age')
print(player)

# 3. 데이터 추가
player['xp'] = 1500
print(player)

player['fav_food'].append("Noodle")
print(player)
