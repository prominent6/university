#include <stdio.h>
union data{
	short i;
	char c[2];
};
typedef union data DATA;
int main(void){
	DATA r,*s=&r;
	s->i=0x3833; //����ɶ����� 
	printf("\n");
	printf("c[0]=%d,c[1]=%d\n",r.c[0],s->c[1]);
	return 0;
}


#include <stdio.h>
int main(void){
	short a,b;
	printf("������һ��ʮ����������\n");
	scanf("%x",&a);
	b=(a>>8 & 0x00FF); //�Ƚ���8λ��������8λ��������1������&00FF������8λ
	printf("result=%x\n",b);
	return 0; 
}
