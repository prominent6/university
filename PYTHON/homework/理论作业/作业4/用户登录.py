dic={"aaa":"123456","bbb":"888888","ccc":"333333"}
account=input()
times=3

if account not in dic:
        print("Wrong User")
else:
    while True:
            password=input()
            if password==dic.get(account):
                print("Success")
                break     
            else:
                times=times-1
                if times!=0:
                    print("Fail,{} Times Left".format(times))
                else:
                    print("Login Denied")
                    break
    
# 补不完的洞
''' for key in dic:
    if account==key:
        
        while True:
            password=input()
            if password==dic.get(account):
                print("Success")
                break     
            else:
                times=times-1
                if times!=0:
                    print("Fail,{} Times Left".format(times))
                else:
                    print("Login Denied")
                    break
        break             
    else:
        # continue
        print("Wrong User")
 '''        
