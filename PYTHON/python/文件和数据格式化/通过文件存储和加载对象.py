import pickle
afile=open('text.txt','wb+')
alist=['aaa','bbb','ccc']
# print(alist)
pickle.dump(alist,afile)
#将对象x序列化后保存到文件f中
afile.close()
bfile=open('text.txt','rb')
blist=pickle.load(bfile)
#从文件中还原对象
print(blist)  #['aaa', 'bbb', 'ccc']
bfile.close()