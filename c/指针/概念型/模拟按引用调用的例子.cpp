#include <stdio.h>

void Fun(int *par);
int main(void)
{
	int arg=1;
	printf("arg=%d\n",arg);
	Fun(&arg);   //���ݱ���arg�ĵ�ֵַ������ 
	printf("arg=%d\n",arg);
	return 0;
}
void Fun(int *par)
{
	printf("par=%d\n",*par); //����β�ָ��ı�����ֵ 
	*par=2; //�ı��β�ָ��ı�����ֵ 
}
