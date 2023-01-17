#include <stdio.h>
#define STUD_N 40  //最多学生人数 
#define COURSE_N 3    //考试科目数

void ReadScore(int score[][COURSE_N],long num[],int n);
void AverforStud(int score[][COURSE_N],int sum[],float aver[],int n);
void AverforCourse(int score[][COURSE_N],int sum[],float aver[],int n);
void Print(int score[][COURSE_N],long num[],int sumS[],float averS[],int sumC[],float averC[],int n);
int main(void)
{
	int score[STUD_N][COURSE_N],sumS[STUD_N],sumC[COURSE_N],n;
	long num[STUD_N];
	float averS[STUD_N],averC[COURSE_N];
	printf("输入学生总人数：");
	scanf("%d",&n);
	ReadScore(score,num,n);    //读入n个学生的学号和成绩 
	AverforStud(score,sumS,averS,n);   //计算每个学生的总分平均分 
	AverforCourse(score,sumC,averC,n);  //计算每门课程的总分平均分 
	Print(score,num,sumS,averS,sumC,averC,n);  //打印 
	return 0;
}
void ReadScore(int score[][COURSE_N],long num[],int n)
{
	printf("Input:\n"); 
	for(int i=0;i<n;i++)
	{
		scanf("%ld",&num[i]);   //输入学号 
		for(int j=0;j<COURSE_N;j++)
		{
			scanf("%d",&score[i][j]);  //输入成绩 
		}
	}
}
void AverforStud(int score[][COURSE_N],int sum[],float aver[],int n)
{
	for(int i=0;i<n;i++)
	{
	     sum[i]=0;
		 for(int j=0;j<COURSE_N;j++)
		 {
		 	sum[i]+=score[i][j];
		 }
		 aver[i]=(float)sum[i]/COURSE_N;
	}
}
void AverforCourse(int score[][COURSE_N],int sum[],float aver[],int n)
{
	for(int j=0;j<COURSE_N;j++)
	{
		sum[j]=0;
		for(int i=0;i<n;i++)
		{
			sum[j]+=score[i][j];
		}
		aver[j]=(float)sum[j]/n;
	}
}
void Print(int score[][COURSE_N],long num[],int sumS[],float averS[],int sumC[],float averC[],int n)
{
	printf("Student's ID\t  MT\t  EN\t  PH\t  SUM\t  AVER\n");
	for(int i=0;i<n;i++)
	{
		printf("%12ld",num[i]);
		for(int j=0;j<COURSE_N;j++)
		{
			printf("  %4d\t",score[i][j]);
		}
		printf("%4d\t%5.1f\n",sumS[i],averS[i]);
	}
	printf("\nSumofCourse\t");
	for(int j=0;j<COURSE_N;j++)
	{
		printf("%4d\t",sumC[j]);
	}
	printf("\nAverofCourse\t");
	for(int j=0;j<COURSE_N;j++)
	{
		printf("%4.1f\t",averC[j]);
	}
	printf("\n");
}
