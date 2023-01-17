from turtle import *
fillcolor("red")
begin_fill()
penup()
goto(-150,100)
pendown()
pencolor("red")

#红色长方形
for i in range(2):
    forward(300)
    right(90)
    forward(200)
    right(90)
end_fill()
penup()
goto(-125,50)
fillcolor("yellow")
begin_fill()
pencolor("yellow")
pendown()
#大五角星
for i in range(5):
    forward(50)
    right(144)
end_fill()

#小五角星们
fillcolor("yellow")
begin_fill()
penup()
goto(-70,90)
pendown()
for i in range(5):
    forward(20)
    right(144)
end_fill()
penup()


fillcolor("yellow")
begin_fill()
goto(-60,50)
pendown()
for i in range(5):
    forward(20)
    right(144)
end_fill()
penup()

fillcolor("yellow")
begin_fill()
goto(-65,10)
pendown()
for i in range(5):
    forward(20)
    right(144)
end_fill()
penup()

fillcolor("yellow")
begin_fill()
goto(-85,-20)
pendown()
for i in range(5):
    forward(20)
    right(144)
end_fill()
done()