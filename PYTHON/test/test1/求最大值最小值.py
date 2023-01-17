data_in=open("in.txt","rt")
# data_out = open("out.txt", 'w')
ls=[]
for line in range(len(data_in.readlines())):
    txt=data_in.readline().replace('\n','')
    for i in txt.split(" "):
        ls.append(i)
        sorted_ls=sorted(ls,reverse=True)
    print(str(sorted_ls[0])+' '+str(sorted_ls[len(ls)-1]))
data_in.close()
# data_out.close()