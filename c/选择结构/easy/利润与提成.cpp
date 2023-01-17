#include <stdio.h>

int main(void){
    int lirun;
    float tc;
    printf("请输入利润：");
    scanf("%ld",&lirun);
    if(lirun<=100000)
    {
    	tc=lirun/10;
        printf("奖金是%10.2f",tc);
    } else if(lirun>100000&&lirun<=200000)
    {
    	tc=(lirun-100000)*7.5/100+100000/10;
        printf("奖金是%10.2f",tc);
    } else if(lirun>200000&&lirun<=400000)
    {
    	tc=(lirun-200000)*5/100+100000/10+100000*7.5/100;
        printf("奖金是%10.2f",tc);
    } else if(lirun>400000&&lirun<=600000)
    {
    	tc=(lirun-400000)*3/100+100000/10+100000*7.5/100+200000*5/100;
        printf("奖金是%10.2f",tc);
    } else if(lirun>600000&&lirun<=1000000)
    {
    	tc=(lirun-600000)*1.5/100+100000/10+100000*7.5/100+200000*5/100+200000*3/100;
        printf("奖金是%10.2f",tc);
    } else if(lirun>1000000)
    {
    	tc=(lirun-1000000)/100+100000/10+100000*7.5/100+200000*5/100+200000*3/100+400000*1.5/100;
        printf("奖金是%10.2f",tc);
    }
    return 0;
}
