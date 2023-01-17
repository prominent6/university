#include <stdio.h>
#include <stdlib.h>
void InputArray(int *p,int m,int n);
double Average(int *p,int m,int n);
int main(void)
{
	int *p=NULL,m,n;
	double aver;
	printf("班级人数：");
	scanf("%d",&m);
	printf("学生人数：");
	scanf("%d",&n);
	p=(int *)calloc(n*m,sizeof(int));  //向系统申请内存
	if(p==NULL)  //
	{
		printf("内存不够！\n");
		exit(1);
	 } 
	 printf("输入成绩：");
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
