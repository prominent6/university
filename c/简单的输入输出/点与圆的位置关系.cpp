#include <stdio.h>
#include <math.h>

int main(void){
    float x,y,r,y2,x2,d;
    printf("������Բ��Բ�����꣺");
    scanf("%f,%f",&x,&y);
    printf("������Բ�İ뾶��");
    scanf("%f",&r);
    printf("������Ҫ�жϵĵ������(x,y)��");
    scanf("%f,%f",&x2,&y2);
    d=sqrt(pow((x2-x),2)+pow((y-y2),2));
    if(d==r){
        printf("�õ���Բ��\n");
    } else if(d<r){
        printf("�õ���Բ��\n");
    } else if(d>r){
        printf("�õ㲻��Բ��\n");
    }
    return 0;
}
