#include <stdio.h>
#define PI 3.14

int main(void){
    float r=0,area=0,c=0;
    printf("������뾶��ֵ��");
    scanf("%f",&r);
    c=2*PI*r;
    area=2*PI*r*r;
    printf("�뾶Ϊ%5.2f��Բ�����Ϊ%5.1f,Բ���ܳ�Ϊ%5.1f\n",r,area,c);
    
    return 0;
}
