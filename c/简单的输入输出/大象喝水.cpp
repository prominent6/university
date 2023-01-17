#include <stdio.h>
#define PAI 3.14159

int main(void){
    int h,r,v;
    printf("please input the height and the radius:\n");
    scanf("%d,%d",&h,&r);
    v=PAI*r*r*h;
    printf("%d",(20000/v)+1);
    
    return 0;
}
