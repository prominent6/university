#include <stdio.h>

int main(void){
    int h=0,m=0,h1=0,h2=0,h3=0;
    printf("请输入爱尔兰当地时间（24小时制，如22：35）: ");
    scanf("%d:%d",&h,&m);
    h1=h-5;
    if(h1<0){
    	h1=24+h1;
	}
    printf("对应的华盛顿时间为%d:%d\n",h1,m);
    h2=h+3;
    if(h2>24){
        h2=h2-24;
    }
    printf("对应的莫斯科时间为%d:%d\n",h2,m);
    h3=h+7;
    if(h3>24){
        h3=h3-24;
    }
    
    printf("对应的北京时间为%d:%d\n",h3,m);
    
    return 0;
}
