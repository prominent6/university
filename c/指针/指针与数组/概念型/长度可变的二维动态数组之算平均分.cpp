#include <stdio.h>
#include <stdlib.h>
void InputArray(int *p,int m,int n);
double Average(int *p,int m,int n);
int main(void)
{
	int *p=NULL,m,n;
	double aver;
	printf("�༶������");
	scanf("%d",&m);
	printf("ѧ��������");
	scanf("%d",&n);
	p=(int *)calloc(n*m,sizeof(int));  //��ϵͳ�����ڴ�
	if(p==NULL)  //
	{
		printf("�ڴ治����\n");
		exit(1);
	 } 
	 printf("����ɼ���");
	 InputArray(p,m,n);
	 aver=Average(p,m,n);
	 printf("aver=%.1f\n",aver);
	 free(p);   //
	 return 0; 
}
void InputArray(int *p,int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&p[i*n+j]);
		}
		
	}
}
double Average(int *p,int m,int n)
{
	int sum=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum+=p[i*n+j];
		}
		
	}
	return (double)sum/(m*n);
}
