#include <stdio.h>
#include <math.h>

int main(void){
	float a=0,b=0,c=0;
	int flag=1;
	
	scanf("%f,%f,%f", &a, &b, &c);
	
	if(a+b>c && b+c>a && a+c>b){
		if(fabs(a-b) <=0.1&&fabs(a-c) <=0.1&&fabs(c-b) <=0.1){
			printf("�ȱ�");
            flag = 0;
		} else if(fabs(a-b) <=0.1||fabs(a-c) <=0.1||fabs(c-b) <=0.1){
			printf("����");
            flag =0;
		}
		if(fabs(a*a+b*b-c*c) <=0.1||fabs(a*a+c*c-b*b) <=0.1||fabs(b*b+c*c-a*a) <=0.1){
			printf("ֱ��");
            flag=0;
		}
		if(flag){
			printf("һ��");
		}
		printf("������\n");
	} else {
		printf("����������\n");
	} 
	return 0;
}

#include <stdio.h>
#include <math.h>
#define LIMIT 1e-1

int main(void){
    float a,b,c;
    int flag=1;
    scanf("%d, %d, %d",&a,&b,&c);
    if(a + b > c && b+c>a &&a+c>b ){
        if(fabs(a - b) <=1e-6||fabs(a - c) <=1e-6||fabs(c - b) <=1e-6){
            printf("����");
            flag=0;
        } 
		if(fabs(a*a+b*b-c*c) <=1e-1||fabs(a*a+c*c-b*b) <=1e-1||fabs(b*b+c*c-a*a) <=1e-1){
            printf("ֱ��");
            flag=0;
        }
		if(flag){
            printf("һ��");
        }
        printf("������");
    } else {
        printf("����������\n");
    }
    return 0;
}
