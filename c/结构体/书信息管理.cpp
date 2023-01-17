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
	
	printf("请录入第一本书的信息...\n");
	getInput(&b1); 
	putchar('\n');
	printf("请录入第二本书的信息...\n");
	getInput(&b2);
	
	printf("\n\n录入完毕，开始打印...\n\n");
    printf("打印第一本书的信息\n");
	printBook(&b1);
	printf("打印第二本书的信息\n");
	printBook(&b2);
}
void getInput(STUDENT *book) //实参对比
{
	printf("请输入书名：");
	scanf("%s",book->title);
	printf("请输入作者：");
	scanf("%s",book->author);
	printf("请输入书价：");
	scanf("%f",&book->price);
	printf("请输入出版日期：");
	scanf("%d-%d-%d",&book->date.year,&book->date.month,&book->date.day);
}
void printBook(STUDENT *book)
{
	printf("书名：%s\n",book->title);
	printf("作者：%s\n",book->author);
	printf("价格：%.2f\n",book->price);
	printf("日期：%d-%d-%d\n",book->date.year,book->date.month,book->date.day);
	printf("出版社：%s\n",book->publisher);
}
