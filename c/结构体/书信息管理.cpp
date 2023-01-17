#include <stdio.h>
#include <string.h>

//struct Date
//{
//	int year;
//	int month;
//	int day;
//};
typedef struct data
{
	int year;
	int month;
	int day;
}DATE; 
//struct Book
//{
//	char title[128];
//	char author[48];
//	float price;
//	struct Date date;
//	char publisher[48];
//};
typedef struct student
{
	char title[128];
	char author[48];
	float price;
	DATE date;
	char publisher[48];
}STUDENT;
void getInput(STUDENT *book);
void printBook(STUDENT *book);
int main(void)    
{
	STUDENT b1,b2;
	
	printf("��¼���һ�������Ϣ...\n");
	getInput(&b1); 
	putchar('\n');
	printf("��¼��ڶ��������Ϣ...\n");
	getInput(&b2);
	
	printf("\n\n¼����ϣ���ʼ��ӡ...\n\n");
    printf("��ӡ��һ�������Ϣ\n");
	printBook(&b1);
	printf("��ӡ�ڶ��������Ϣ\n");
	printBook(&b2);
}
void getInput(STUDENT *book) //ʵ�ζԱ�
{
	printf("������������");
	scanf("%s",book->title);
	printf("���������ߣ�");
	scanf("%s",book->author);
	printf("��������ۣ�");
	scanf("%f",&book->price);
	printf("������������ڣ�");
	scanf("%d-%d-%d",&book->date.year,&book->date.month,&book->date.day);
}
void printBook(STUDENT *book)
{
	printf("������%s\n",book->title);
	printf("���ߣ�%s\n",book->author);
	printf("�۸�%.2f\n",book->price);
	printf("���ڣ�%d-%d-%d\n",book->date.year,book->date.month,book->date.day);
	printf("�����磺%s\n",book->publisher);
}
