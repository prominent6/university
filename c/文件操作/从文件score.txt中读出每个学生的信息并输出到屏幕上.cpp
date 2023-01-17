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
	char studentName[10]��
	char studentSex;
	DATE birthday;
	int score[4];
	float aver; 
} STUDENT;
void ReadfromFile(STUDENT stu[],int *n,int *m);
void PrintScore(STUDENT stu[],int n,int m);
int main(void)
{
	STUDENT stu[N];
	int n,m=4;
	ReadfromFile(stu,&n,&m);
	PrintScore(stu,n,m);
	return 0;
}
void ReadfromFile(STUDENT stu[],int *n,int *m)
{
	FILE *fp;
	if((fp=fopen("score.txt","r"))==NULL)
	{
		printf("�ļ���ʧ�ܣ�\n");
		exit(0);
	}
	fscanf_s(fp,"%d\t%d",n,m);  //���ļ��ж���ѧ�������Ϳγ����� 
	for(int i=0;i<*n;i++)  //ѧ������������nָ��Ĵ洢��Ԫ 
	{
		fscanf_s(fp,"%10ld",&stu[i].studentID);
		fscanf_s(fp,"%8s",sut[i].studentName);
		fscanf_s(fp," % c",&stu[i].studentSex);
		fscanf_s(fp,"%6d/%2d/%2d",&stu[i].birthday.year,
		&stu[i].birthday.month,
		&stu[i].birthday.day);
		for(int j=0;j<*m;j++)  //�γ�����������mָ��Ĵ洢��Ԫ 
		{
			fscanf(fp,"%4d",&stu[i].score[j]);
		}
		fscanf(fp,"%f",&stu[i].aver);
	}
	fclose(fp);
}
void PrintScore(STUDENT stu[],int n,int m)
{
	for(int i=0;i<n;i++)  //ѧ������������nָ��Ĵ洢��Ԫ 
	{
		printf("%10ld%8s%3c%6d/%02d/%02d",
		stu[i].studentID,sut[i].studentName,
		stu[i].studentSex,stu[i].birthday.year,
		stu[i].birthday.month,stu[i].birthday.day);
		for(int j=0;j<m;j++)  //�γ�����������mָ��Ĵ洢��Ԫ 
		{
			printf("%4d",stu[i].score[j]);
		}
		printf("%6.1f\n",stu[i].aver);
	}
}
