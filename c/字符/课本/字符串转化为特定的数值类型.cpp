#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[]={"   123.5"};
	int intNum;
	long longNum;
	double doubleNum;
	intNum=atoi(str);   //�ַ���ת��Ϊ������ 
	longNum=atol(str);  //�ַ���ת��Ϊ�������� 
	doubleNum=atof(str);  //�ַ���ת��Ϊ˫����ʵ���� 
	printf("intNum=%d\n",intNum);
	printf("longNum=%ld\n",longNum);
	printf("doubleNum=%f\n",doubleNum);
	return 0;
}
