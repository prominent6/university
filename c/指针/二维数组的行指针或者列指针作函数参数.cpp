#include <stdio.h>
#define N 4
void InputArray(int p[][N],int m,int n);
void OutputArray(int p[][N],int m,int n);
int main(void)
{
	int a[3][4];
	printf("Input 3*4 numbers:\n");
	InputArray(a,3,4);
	OutputArray(a,3,4);
	return 0;
}

//形参声明为列数已知的二维数组 
//void InputArray(int p[][N],int m,int n)
//{
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			scanf("%d",&p[i][j]);
//		}
//		printf("\n");
//	}
//}
//void OutputArray(int p[][N],int m,int n)
//{
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			printf("%4d",p[i][j]);
//		}
//		printf("\n");
//	}
//}

//函数声明为指向列数已知的二维数组的行指针 
//void InputArray(int (*p)[N],int m,int n)
//{
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			scanf("%d",*(p+i)+j);
//		}
//		printf("\n");
//	}
//}
//void OutputArray(int (*p)[N],int m,int n)
//{
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			printf("%4d",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//}

//函数声明为指向二维数组的列指针 
void InputArray(int *p,int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&p[i*n+j]);
		}
		printf("\n");
	}
}
void OutputArray(int (*p)[N],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%4d",p[i*n+j]);
		}
		printf("\n");
	}
} 
