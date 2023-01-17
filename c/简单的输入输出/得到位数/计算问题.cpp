#include <stdio.h>
#include <math.h>

int main(void){
    int a=0,b=0,c=0,d=0,e=0;
    printf("Input x:");
    scanf("%d",&a);
    
    if(a<0) a=0-a;
    
    b=a/1000;
    c=(a-b*1000)/100;
    d=(a-b*1000-c*100)/10;
    e=a%10;
    
    printf("y=%d\n",e*1000+d*100+c*10+b);
    printf("a=%d,b=%d\n",e*10+d,c*10+b);
    printf("result=%d\n",pow(e*10+d,2),pow(c*10+b,2));
    
    return 0;
}
