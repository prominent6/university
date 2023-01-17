def txt_sort():
    txt = open("hamlet.txt", "r").read()
    #将大写转换为小写
    txt = txt.lower()
    #剔除特殊符号
    for i in '!"#$%&()*+,-./:;<=>?@[\\]^_‘{|}~':
        txt = txt.replace(i, " ")
    return txt
 
#输出n个单词和其出现次数，每个单词一行；
hamletTxt = txt_sort()
words = hamletTxt.split()
counts = {}  #新建一个空字典
for word in words:
    counts[word] = counts.get(word, 0) + 1  
    #对单词出现的频率进行统计
 
items = list(counts.items())
items.sort(key=lambda x: x[1], reverse=True)
n=int(input())
for i in range(n):
    word, count = items[i]  #返回相对应的键值对
    #单词   左对齐，并占10个位置；  
    #次数   右对齐，并占5个位置
    print ("{0:<10}{1:>5}".format(word, count))