#include <stdio.h>
#include <stdlib.h>
#define N 30
typedef struct date
{
	int year;
	int month;
	int day;
} DATE;
typedef struct student
{
	long studentID;
	char studentName[10]；
	char studentSex;
	DATE birthday;
	int score[4];
	float aver; 
} STUDENT;
void InputScore(STUDENT stu[],int n,int m);
void AverScore(STUDENT stu[],int n,int m);
void WritetoFile(STUDENT stu[],int n,int m);
int main(void)
{
	STUDENT stu[N];
	int n;
	printf("学生人数：");
	scanf("%d",&n);
	InputScore(stu,n,4);
	AverScore(stu,n,4);
	WritetoFile(stu,n,4);
	return 0;
}
void InputScore(STUDENT stu[],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		printf("Input record %d:\n",i+1);
		scanf("%ld",&stu[i].studentID);
		scanf("%s",sut[i].studentName);
		scanf(" %c",&stu[i].studentSex);
		scanf("%d",&stu[i].birthday.year);
		scanf("%d",&stu[i].birthday.month);
		scanf("%d",&stu[i].birthday.day);
		for(int j=0;j<m;j++)
		{
			scanf("%d",&stu[i].score[j]);
		}
	}
}
void AverScore(STUDENT stu[],int n,int m)
{
	int sum; 
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=0;j<m;j++)
		{
			sum+=stu.score;
		}
		stu.aver=(float)sum/m;
	}
}
void WritetoFile(STUDENT stu[],int n,int m)
{
	FILE *fp;   //定义文件指针 
	if((fp=fopen("score.txt","w"))==NULL)
	{
		printf("文件打开失败！\n");
		exit(0);
	}
	fprintf(fp,"%d\t%d\n",n,m);  //将学生人数和课程门数写入文件
	for(int i=0;i<n;i++)
	{
		fprintf(fp,"%10ld%8s%3c%6d/%02d/%02d",stu[i].studentID,
		stu[i].studentName,
		stu[i].studentSex,
		stu[i].birthday.year,
		stu[i].birthday.month,
		stu[i].birthday.day);
		for(int j=0;j<m;j++)
		{
			fprintf(fp,"%4d",stu[i].score[j]);
		}
		fprintf(fp,"%6.1f\n",stu[i].aver);
	 } 
	fclose(fp);
}
