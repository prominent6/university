#include <stdio.h>

int main(void){
    int x;
    printf("请输入整数x：\n");
    scanf("%d",&x);
    if(x>=-100&&x<=-10){
        printf("输入X=%d 由分段函数求得y的值为 %.2f",x,(float)x+2);
    } else if(x>-10&&x<0){
        printf("输入X=%d 由分段函数求得y的值为 %.2f",x,-((float)x*x)/2);
    } else if(0<=x&&x<100){
        printf("输入X=%d 由分段函数求得y的值为 %.2f",x,5*(float)x*x*x+(float)x/5+1);
    } else {
        if(x>0){
            printf("输入X=%d 由分段函数求得y的值为 %.2f",x,7*(float)x+9);
        } else {
            printf("输入X=%d 由分段函数求得y的值为 %.2f",x,-7*(float)x+9);
        }
    }
    return 0;
}
