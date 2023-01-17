#include <stdio.h>
#define N 40

void FindMax(int score[],long num[],int n,int *maxScore,long *maxNum); 
int main(void)
{
	int score[N],maxScore;
	int n,i;
	long num[N],maxNum;
	printf("学生人数：\n");
	scanf("%d",&n);
	printf("学号和成绩：\n");
	for(int i=0;i<n;i++)
	{
		scanf("%ld%d",&num[i],&score[i]); //长整型输入学号 
	} 
	FindMax(score,num,n,&maxScore,&maxNum);
//	 printf("maxScore=%d,maxNum=%ld\n",*maxScore,*maxNum);  //报错 
	printf("maxScore=%d,maxNum=%ld\n",maxScore,maxNum);
	return 0;
}
void FindMax(int score[],long num[],int n,int *maxScore,long *maxNum)
{
	*maxScore=score[0];
	*maxNum=num[0];
	for(int i=0;i<n;i++)
	{
		if(score[i]>*maxScore)
		{
			*maxScore=score[i];
			*maxNum=num[i];
		}
	}
}
