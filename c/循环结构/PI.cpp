#include <stdio.h>
#include <math.h>
int main(void){
	float n;
	double PI=0;
	printf("����ʽ�����һ��ľ���ֵС��nʱֹͣ����:");
	scanf("%f",&n);
	for(int i=1;1/(double)(2*i-1)>=n;i++){
		PI+=pow(-1,i+1)/(double)(2*i-1);
	}
	printf("PI=%lf\n",4*PI);
	return 0;
}
