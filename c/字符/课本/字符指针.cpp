#include <stdio.h>
#define N 12
int main(void)
{
	char name[N];
	char *ptrName=name;
	printf("����������֣�");
	//gets(ptrName); //�������������ַ������ȣ��������𻺳������
	fgets(name,sizeof(name),stdin); //
	printf("\"Hello\"!");
	printf("%s",ptrName);
	return 0;
}
