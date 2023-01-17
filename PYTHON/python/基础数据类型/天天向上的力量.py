''' import math
dayfactor=0.01
dayup=math.pow((1.0+dayfactor),365)
daydown=math.pow((1.0-dayfactor),365)
print("向上:{:.2f},向下：{:.2f}".format(dayup,daydown))
 '''
def dayUp(df):
    dayup=0.01
    for i in range(365):
        if i%7 in [6,0]:
            dayup=dayup*(1-0.01)
        else:
            dayup=dayup*(1+df)
    return dayup
dayfactor=0.01
while (dayUp(dayfactor)<37.78):
    dayfactor +=0.001
print("每天努力参数是：{:.3f}".format(dayfactor))