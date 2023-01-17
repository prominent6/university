#continue
userlist=['xiaosu','xiaolan']
bvalid=False
count=3
while count>0:
    userinput=input("Enter your name here")
    for user in userlist:
        if user==userinput:
            bvalid=True
            break
    if not bvalid:
            print("not found!")
            count-=1
            continue
    else:
            print('Welcome onboard,',userinput)
            break
else:
        print("enough!")