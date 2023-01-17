str=input("Please input a string:")
Dict={}
Dict={letter:str.count(letter) for letter in str}
''' for i in str:  #i表示key
    Dict[i]=str.count(i) '''
for key in Dict:
    print('({},{})'.format(key,Dict.get(key)))
    print('({},{})'.format(key,Dict[key]))


#错误结果及其原因
# str=list(input("Please input a string:"))
# Dict={}
# print(set(str))   
# #集合元素是无序的，集合的打印效果与定义顺序可以不一致
# for i in set(str):
#     Dict[i]=str.count(i)
# for key in Dict:
#     # print('({},{})'.format(key,Dict.get(key)))
#     print('({},{})'.format(key,Dict[key]))
