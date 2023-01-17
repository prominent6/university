#include <stdio.h>

int main(void){
    int l,lirun;
    printf("请输入利润：");
    scanf("%ld",&l);
    lirun=l/100000;
    
    switch(lirun)
    {
        case 0:
        printf("奖金是%10.2f",l*10/100);
        break;
        case 1:
        printf("奖金是%10.2f",100000*10/100+(l-100000)*7.5/100);
        break;
        case 2:
        printf("奖金是%10.2f",200000*10/100+(l-200000)*5/100);
        break;
        case 3:
        printf("奖金是%10.2f",400000*10/100+(l-400000)*3/100);
        break;
        case 4:
        printf("奖金是%10.2f",600000*10/100+(l-600000)*1.5/100);
        break;
        case 5:
        printf("奖金是%10.2f",1000000*10/100+(l-1000000)*1/100);
        break;
    }
    return 0;
}
