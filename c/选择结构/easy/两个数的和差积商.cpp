#include <stdio.h>

int main(void){
    float a=0,b=0;
	 
    printf("\n������������:\n");
    scanf("%f %f",&a,&b);
    printf("��Ϊ:%.2f\n",a+b);
    printf("��Ϊ:%.2f\n",a-b);
    printf("��Ϊ:%.2f\n", a*b);
    printf("��Ϊ:%.2f\n", a/b);
    printf("����Ϊ:%d\n", (int)a%(int)b);
    
    return 0;
    
}
