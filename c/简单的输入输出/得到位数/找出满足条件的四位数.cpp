#include <stdio.h>

int main(void){
    int x,y,b,c,d,e;
    
    for(x=1000;x>=1000&&x<10000;x++){
    	b=x/1000;
        c=(x-b*1000)/100;
        d=(x-b*1000-c*100)/10;
        e=x%10;
        y=e*1000+d*100+c*10+b;
        if(y>=1000&&y<10000&&y%x==0&&x/y!=1){
            printf("%6d",x);
        }
    }
    return 0;
}
