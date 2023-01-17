#include <stdio.h>

int main(void){
    int a=0,b=0,c=0,d=0,e=0,result=0;
    scanf("%d",&a);   //a shuruzhengshu
    b=a/1000;   //qianwei
    c=(a-b*1000)/100; //baiwei
    d=(a-b*1000-c*100)/10; //shiwei
    e=a%10;
    result=e*1000+d*100+c*10+b;
    printf("%d",result);

    return 0;
    
    
}
