from turtle import *
rds=16
pencolor("red")
circle(rds)
for i in range(8):
    rds+=20
    penup()
    right(90)
    fd(20)
    left(90)
    pendown()
    circle(rds)

done()