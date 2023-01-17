#include <stdio.h>
int main(void){
    int a,b1,b2;
    printf("please input n:\n");
    scanf("%d",&a);
    b2=a%100;
    b1=(a-b2)/100;
    if(a>=0){
     printf("%d,%d\n",b1,b2);
    } else if(a<0){
        
        printf("%d,%d\n",b1,b2);
    }
    return 0;
}
