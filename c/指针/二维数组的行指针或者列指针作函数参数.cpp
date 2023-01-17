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

//�β�����Ϊ������֪�Ķ�ά���� 
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

//��������Ϊָ��������֪�Ķ�ά�������ָ�� 
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

//��������Ϊָ���ά�������ָ�� 
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
