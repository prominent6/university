weight=float(input())
index=0.5
for i in range(10):
    weight+=index
print("moon:{:.2f},earth:{:.2f}".format(weight*0.165,weight))