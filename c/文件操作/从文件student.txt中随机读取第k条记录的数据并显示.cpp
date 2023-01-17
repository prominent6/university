#include <stdio.h>
#include <stdlib.h>
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
void SearchinFile(char fileName[],long k);
int main(void)
{
	long k;
	printf("Input the searching record number:");
	scanf("%ld",&k);
	SearchinFile("student.txt",k);
	return 0;
}
//从文件中查找并显示第k条记录的数据
void SearchinFile(char fileName[],long k)
{
	FILE *fp；
	STUDENT stu;
	if((fp=fopen("FileName","r"))==NULL)
	{
		printf("文件打开失败！\n");
		exit(0);
	}
	fseek(fp,(k-1)*sizeof(STUDENT),SEEK_SET); //将文件位置指针从文件开头向后移动（k-1）*sizeof(STUDENT)个字节 
	//输出当前的记录号
	printf("record number=%d\n",ftell(fp)/sizeof(STUDENT)+1); 
	fread(&stu,sizeof(STUDENT),1,fp);  //按数据块读取文件
	printf("%10ld%8s%3c%6d/%02d/%02d",
		stu.studentID,sut.studentName,
		stu.studentSex,stu.birthday.year,
		stu.birthday.month,stu.birthday.day);
		for(int j=0;j<4;j++)   
		{
			printf("%4d",stu.score[j]);
		}
		printf("%6.1f\n",stu.aver);
		printf("record number=%d\n",ftell(fp)/sizeof(STUDENT)+1);
		fclose(fp); 
 } 

