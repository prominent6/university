#include <stdio.h>

int main(void){
    int i=0,y=0,m=0,d=0;
    float u=0;
    printf("Enter item number:\n");
    scanf("%d",&i);
    printf("Enter unit price:\n");
    scanf("%f",&u);
    printf("Enter purchase date (yy mm dd):\n");
    scanf("%d %d %d",&y,&m,&d);
    printf("Item      Unit     Purchase\n");
    printf("%-9d$%-9.2f%02d/%02d/%02d\n",i,u,y,m,d);
    
    return 0;
    
}
