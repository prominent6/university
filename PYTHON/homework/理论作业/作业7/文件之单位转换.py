# fo=open("in162.txt","w+")
# ls=input().split(' ') #列表类型
# fo.writelines(ls)
# fo.seek(0)
# for line in fo:
#     print(line)
# fo.close()

fo=open("in162.txt","r")
sum=0
line=fo.readline()
weight=line.split()
#['1.0', '1.0', '1.0', '1.0', '1.0', '1.0', '1.0', '1.0', '1.0', '1.0']
for i in weight:
    sum+=eval(i)*0.454
fo.close()
fo1=open("out162.txt","w+")
''' ls=[]
ls.append(sum)
fo1.writelines(ls) '''
fo1.write("%.2f"%sum)
fo1.close()