#include <stdio.h>

int main(void){
    int a=0,b=0;
    float c=0;
    printf("����������������");
    scanf("%d %d",&a,&b);
    printf("%d is %.1f percent of %d",a,(float)a/b*100,b);
    
    return 0;
    
}
