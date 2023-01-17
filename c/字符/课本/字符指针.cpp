#include <stdio.h>
#define N 12
int main(void)
{
	char name[N];
	char *ptrName=name;
	printf("输入你的名字：");
	//gets(ptrName); //不能限制输入字符串长度，容易引起缓冲区溢出
	fgets(name,sizeof(name),stdin); //
	printf("\"Hello\"!");
	printf("%s",ptrName);
	return 0;
}
