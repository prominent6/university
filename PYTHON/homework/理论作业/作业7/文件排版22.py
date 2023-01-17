''' 整一个题目的逻辑就是读取文件中的每一行，然后提取其中的两个单词，最后将他们格式化输出。
分成流程就是

按行读取文件
对这一行去掉非单词之间的空格，并将\t转化为空格，然后将每一个修改后的行元素添加到列表
对这个列表进行拼接成字符串
将字符串按照:分割
对分割后的每一部分去掉首尾的空格
最后按照输入的格式进行输出
 '''

with open("listout.txt","w") as f:
    f.write("")
loca = int(input())
with open(r"listin.txt", "r") as f:
    data = f.readlines()
    a = []
    str_lens = []
    for line in data:
        # print(list(line))
        flag = False
        for i in line:
            if i == " " or i == "\t":
                if flag == False:
                    if i == " ":
                        a.append(i)
                        flag = True
                    if i == "\t":
                        a.append(" ")
                        flag = True
                else:
                    continue
            else:
                flag = False
                a.append(i)
        # print(a)
        cache_str = "".join(a)
        # print(cache_str)
        cache_list = cache_str.split(":")
        print(cache_list)
        for i in range(len(cache_list)):
            cache_list[i] = cache_list[i].strip()
        str_lens.append(len(cache_list[0]))
        # print(len(cache_list))
        with open("listout.txt","a") as q:
            q.write(cache_list[0]+" "*(loca-len(cache_list[0])-1)+": "+cache_list[1]+"\n")
        a = []
    print(str_lens)