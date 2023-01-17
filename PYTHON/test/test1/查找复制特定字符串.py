n=int(input())
data_in=open("text.txt","rt")
flag=True
for i in range(n):
    txt=data_in.readline().replace('\n','')
    if txt.startswith("A"):
        print(txt)
        flag=False
if flag:
    print("not found")
data_in.close()