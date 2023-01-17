for x in range(1,11):
    print(repr(x).rjust(2),repr(x*x).rjust(3),end=' ')
    print(repr(x*x*x).rjust(4))
#str.rjust()通过在左侧填充空格，对给定宽度字段中的字符串进行右对齐
''' 1   1    1
 2   4    8
 3   9   27
 4  16   64
 5  25  125
 6  36  216
 7  49  343
 8  64  512
 9  81  729
10 100 1000 '''


#str.zfill() 该方法在数字字符串左边填充零，且能识别正负号
print('-12'.zfill(5)) #-0012