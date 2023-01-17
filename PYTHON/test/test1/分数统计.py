data_in=open("grade.txt","rt")
data_out = open("result.txt", 'w')
ls=list(data_in.readlines())
print(ls)
index=0
while(index<len(ls)):
    ls[index]=int(ls[index].replace('\n',''))
    index=index+1
data_out.write(str(max(ls))+'\n')
data_out.write(str(min(ls))+'\n')
avg=round(sum(ls)/len(ls),1)
data_out.write(str(avg)+'\n')

data_in.close()
data_out.close()