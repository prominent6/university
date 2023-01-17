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
void InputScore(STUDENT stu[],int n,int m);
void AverScore(STUDENT stu[],int n,int m);
void WritetoFile(STUDENT stu[],int n);
int ReadfromFile(STUDENT stu[]);
void PrintScore(STUDENT stu[],int n,int m);
int main(void)
{
	STUDENT stu[N];
	int n,m=4;
	printf("ѧ��������");
	scanf("%d",&n);
	InputScore(stu,n,m);
	AverScore(stu,n,m);
	WritetoFile(stu,n);
	n=ReadfromFile(stu);
	PrintScore(stu,n,m);
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
			sum+=stu[i].score[j];
		}
		stu[i].aver=(float)sum/m;
	}
}
void WritetoFile(STUDENT stu[],int n)
{
	FILE *fp;   //�����ļ�ָ�� 
	if((fp=fopen("score.txt","w"))==NULL)
	{
		printf("�ļ���ʧ�ܣ�\n");
		exit(0);
	}
	fwrite(stu,sizeof(STUDENT),n,fp);  //�����ݿ�д�ļ� 
	fclose(fp);
}
int  ReadfromFile(STUDENT stu[])
{
	int i;
	FILE *fp;
	if((fp=fopen("score.txt","r"))==NULL)
	{
		printf("�ļ���ʧ�ܣ�\n");
		exit(0);
	}
	for(i=0;!feof(fp);i++)  
	{
		fread(&stu[i],sizeof(STUDENT),1,fp); //�����ݿ���ļ� 
	}
	fclose(fp);
	printf("Total students is %d.\n",i-1);
	return i-1;
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

