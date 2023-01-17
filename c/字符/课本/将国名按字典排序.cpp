//#include <stdio.h>
//#include <string.h>
//#define N 150
//#define MAX_LEN 10
//void SortString(char str[][MAX_LEN],int n);
//int main(void)
//{
//	int n;
//	char name[N][MAX_LEN];  //最多N个国家，每个国家的国名长度小于MAX_LEN 
//	printf("多少个国家？");
//	scanf("%d",&n); 
//	getchar();
//	printf("输入国家的名字：\n");
//	for(int i=0;i<n;i++)
//	{
//		gets(name[i]);
//	}
//	SortString(name,n);
//	printf("排序后：\n");
//	for(int i=0;i<n;i++)
//	{
//		puts(name[i]);
//	}
//  return 0;
// }
// void SortString(char str[][MAX_LEN],int n)
// {
// 	char temp[MAX_LEN];
// 	for(int i=0;i<n-1;i++)
// 	{
// 		for(int j=i+1;j<n;j++)
// 		{
// 			if(strcmp(str[j],str[i])<0)   //
// 			{
// 				strcpy(temp,str[i]);  //
// 				strcpy(str[i],str[j]);
// 				strcpy(str[j],temp);
//			 }
//		 }
//	 }
//  }
// 

#include <stdio.h>
#include <string.h>
#define N 150
#define MAX_LEN 10
void SortString(char *ptr[],int n);
int main(void)
{
	int n;
	char name[N][MAX_LEN];  //最多N个国家，每个国家的国名长度小于MAX_LEN 
	char *pStr[N];    //定义字符指针数组
	printf("多少个国家？");
	scanf("%d",&n); 
	getchar();
	printf("输入国家的名字：\n");
	for(int i=0;i<n;i++)
	{
		pStr[i]=name[i];
		//让pStr[i]指向二维数组name的第一行,
	//输入第i个字符串保存到 pStr[i]指向的存储单元（即二维字符数组name的第i行）中   
		//与指针一样，使用前必须初始化 ，还可用字符串常量进行初始化
	//	char *pStr[N]={"Amercia","England","Austalia","Sweden","Finland"}; 
		
		gets(pStr[i]);
	}
	SortString(pStr,n);
	printf("排序后：\n");
	for(int i=0;i<n;i++)
	{
		puts(pStr[i]);
	}
	return 0;
 }
 //用指针数组作函数参数 
 //排序结果只改变原来指针数组pStr的元素的指向，
 //并未改变二维字符数组name中字符串的排列顺序 
 void SortString(char *ptr[],int n)
 {
 	char *temp=NULL;
 	for(int i=0;i<n-1;i++)
 	{
 		for(int j=i+1;j<n;j++)
 		{
 			if(strcmp(ptr[j],ptr[i])<0)   //
 			{
 				temp=ptr[i];   
 				ptr[i]=ptr[j];
 				ptr[j]=temp;
			 }
		 }
	 }
  } 
