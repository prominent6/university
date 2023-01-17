from re import T
from turtle import *
color('red','yellow')
begin_fill()
while True:
    forward(200)
    left(170)
    if abs(pos())<1:
        break
end_fill()

color('blue','green')
begin_fill()
while True:
    backward(200)
    left(170)
    if abs(pos())<1:
        break
end_fill()

left(90)
color('purple','pink')
begin_fill()
while True:
    forward(200)
    left(170)
    if abs(pos())<1:
        break
end_fill()

color('black','white')
begin_fill()
while True:
    backward(200)
    left(170)
    if abs(pos())<1:
        break
end_fill()
done()
