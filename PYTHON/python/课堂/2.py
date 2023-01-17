pts=[]
rFile=open("test.txt","r")
for point  in rFile:
    pts+=list([point[:-2].split(',') ])