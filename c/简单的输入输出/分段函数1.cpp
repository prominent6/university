#include <stdio.h>

int main(void){
    int x;
    printf("����������x��\n");
    scanf("%d",&x);
    if(x>=-100&&x<=-10){
        printf("����X=%d �ɷֶκ������y��ֵΪ %.2f",x,(float)x+2);
    } else if(x>-10&&x<0){
        printf("����X=%d �ɷֶκ������y��ֵΪ %.2f",x,-((float)x*x)/2);
    } else if(0<=x&&x<100){
        printf("����X=%d �ɷֶκ������y��ֵΪ %.2f",x,5*(float)x*x*x+(float)x/5+1);
    } else {
        if(x>0){
            printf("����X=%d �ɷֶκ������y��ֵΪ %.2f",x,7*(float)x+9);
        } else {
            printf("����X=%d �ɷֶκ������y��ֵΪ %.2f",x,-7*(float)x+9);
        }
    }
    return 0;
}
