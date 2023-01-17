import random as r
#定义花色和面值
suits=[3,4,5,6]
faces=['2','3','4','5','6','7','8','9','10','J','Q','K','A']
#chr(i) 返回表示unicode码位为整数i的字符的字符串
# print(str(chr(suits[1]))+faces[0])

#动态生成一副牌
deck=[]
for i in range(4):
    for j in range(13):
        deck[i*4+j:i*4+j]+=[str(chr(suits[i]))+faces[j]]
        print(deck[i*4+j],end='')
    print() 
    #正常情况下，print() 自带了‘\n’.所以，print()即为一个\n

#shuffle()对序列中的元素进行随机排列，返回打乱后的序列
r.shuffle(deck)
print('\n------shuffling------\n')
for i in range(52):
    print(deck[i],end='')
    if(i+1)%13==0:
        print('')