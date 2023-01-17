import math
# print(f'The value of pi is approximately {math.pi:.3f}')

#在 ':' 后传递整数，为该字段设置最小字符宽度，常用于列对齐：
table = {'Sjoerd': 4127, 'Jack': 4098, 'Dcab': 7678}
for name,phone in table.items():
    print(f'{name:10} ==> {phone:10d}')