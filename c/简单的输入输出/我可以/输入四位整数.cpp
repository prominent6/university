#include <stdio.h>
int main(void)
{
    int x=0,b0=0,b1=0,b2=0,b3=0,y=0,a=0,b=0,result=0;
    printf("Input x:\n");
    scanf("%d",&x);
    if(x<0)    x=0-x;
    b0=x/1000;                //1
    b1=(x-b0*1000)/100;        //2
    b2=(x-b0*1000-b1*100)/10;   //3 
    b3=x%10;                      //4
    y=b3*1000+b2*100+b1*10+b0;
    a=b3*10+b2;
    b=b1*10+b0;
    result=a*a+b*b;
    printf("y=%d\n",y);
    printf("a=%d,b=%d\n",a,b);
    printf("result=%d\n",result);
    return 0;
}

