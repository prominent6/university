#include <stdio.h>
int main(void){
	double m;
	printf("��������������ǿ��: ");
	scanf("%lf",&m);
	printf("���ε�������");
	if(m<4.0) printf("��С");
	else if(m>=4.0&&m<5.0) printf("�����ζ�");
	else if(m>=5.0&&m<6.0) printf("ǽ����������ʵ�Ľ����ﱻ�ƻ�");
	else if(m>=6.0&&m<7.0) printf("�̴ѵ�������ͨ�����ﱻ�ƻ�");
	else if(m>=7.0&&m<8.0) printf("���¹������ѣ���ʵ�Ľ�����Ҳ���ƻ�");
	else printf("���沨��״�������������������");
	printf("��\n");
	return 0;
}
