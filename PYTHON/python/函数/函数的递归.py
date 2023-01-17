# 实现n的阶乘
''' def fact(n):
    if n==0:
        return 1
    else:
        return n*fact(n-1)
num=eval(input("请输入一个整数："))
print(fact(abs(int(num))))
 '''

#字符串的反转
''' def reverse(s):
    if s=="":
        return s
    else:
        return reverse(s[1:])+s[0]
print(reverse("szx"))
 '''

#科赫曲线的绘制
''' import turtle
def koch(size,n):
    if n==0:
        turtle.fd(size)
    else:
        for angle in [0,60,-120,60]:
            turtle.left(angle)
            koch(size/3,n-1)
def main():
    turtle.setup(800,400)
    turtle.speed(2) #控制绘制速度
    turtle.penup()
    turtle.goto(-300,-50)
    turtle.pendown()
    turtle.pensize(2)
    koch(600,2)
    turtle.hideturtle()
    turtle.done()
main()
 '''

#科赫曲线的反向绘制
''' import turtle
def koch(size,n):
    if n==0:
        turtle.fd(size)
    else:
        for angle in [0,60,-120,60]:
            turtle.right(angle)
            koch(size/3,n-1)
def main():
    turtle.setup(800,400)
    turtle.speed(2) #控制绘制速度
    turtle.penup()
    turtle.goto(-300,-50)
    turtle.pendown()
    turtle.pensize(2)
    koch(600,2)
    turtle.hideturtle()
    turtle.done()
main()
 '''

 #科赫曲线的雪花效果
''' import turtle
def koch(size,n):
    if n==0:
        turtle.fd(size)
    else:
        for angle in [0,60,-120,60]:
            turtle.left(angle)
            koch(size/3,n-1)
def main():
    turtle.setup(600,600)
    turtle.speed(100) #控制绘制速度
    turtle.penup()
    turtle.goto(-200,100)
    turtle.pendown()
    turtle.pensize(2)
    level=5
    koch(400,level)
    turtle.right(120)
    koch(400,level)
    turtle.right(120)
    koch(400,level)
    turtle.hideturtle()
    turtle.done()
main() '''

#实现组合数
''' from math import *
def C(n,k):
    return factorial(n)//(factorial(k)*factorial(n-k))
n,k=eval(input("input n and k:"))
print(C(n,k)) '''

#打印杨辉三角
''' from math import *
def C(n,k):
    return factorial(n)//(factorial(k)*factorial(n-k))
def printYH(lines):
    for i in range(0,lines):
        for j in range(0,i+1):
            print(C(i,j),end=' ')
        print('')
printYH(5) '''

  