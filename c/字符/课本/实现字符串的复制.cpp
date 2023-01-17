#include <stdio.h>
#define N 80
//void MyStrcpy(char dstStr[],char srcStr[]);
void MyStrcpy(char *dstStr,char *srcStr);
int main(void)
{
	char a[N],b[N];
	printf("Input a string:");
	gets(a);
	MyStrcpy(b,a);
	printf("copy:");
	puts(b);
	return 0;
}
//用字符数组作为函数参数 
//void MyStrcpy(char dstStr[],char srcStr[])
//{
//	int i=0;
//	while(srcStr[i]!='\0')  //
//	{
//		dstStr[i]=srcStr[i];
//		i++;
//	}
//	dstStr[i]='\0';    //在字符串的末尾加上字符串结束标志 
//}


//用字符指针作为函数参数 
void MyStrcpy(char *dstStr,char *srcStr)
{
	while(*srcStr!='\0')  //
	{
		*dstStr=*srcStr;
		srcStr++;
		dstStr++;    //指向下一个字符 
	}
	*dstStr='\0';    //在字符串的末尾加上字符串结束标志 
}
