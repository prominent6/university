String=input()
num1,num2,num3=0,0,0
for index in range(0,len(String)):
    if ord("a")<=ord(String[index])<=ord("z"):
        num2=num2+1
    elif ord("A")<=ord(String[index])<=ord("Z"):
        num1=num1+1
    elif ord("1")<=ord(String[index])<=ord("9"):
        num3=num3+1
print(num1)
print(num2)
print(num3)
