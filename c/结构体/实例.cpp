#include <stdio.h>

struct Date
{
	int year;
	int month;
	int day;
};  //末尾有分号 
struct Book  //结构体名称 
{
	char title[128];
	char author[40];
	float price;
	struct Date date;
	char publisher[40];
}book={  //初始化   //float型不要引号 
	"《卷！》","小苏",48.5,{2022,2,2},"清华大学出版社" 
}; //}; 

int main(void)
{
	struct Book *pt;
	pt=&book;
	//struct Book book; //定义结构体类型变量 
//	printf("请输入书名：");
//	scanf("%s",book.title);
//	printf("请输入售价：");
//	scanf("%f",&book.price); 
//	
//通过结构体指针访问结构体成员的方法一 
	printf("书名：%s\n",(*pt).title);
	printf("售价：%.2f\n",(*pt).price);
	printf("出版日期：%d-%d-%d\n",(*pt).date.year,(*pt).date.month,(*pt).date.day);
	
//方法二  箭头！ 
    printf("书名：%s\n",pt->title);
	printf("售价：%.2f\n",pt->price);
	printf("出版日期：%d-%d-%d\n",pt->date.year,pt->date.month,pt->date.day);
	return 0;
}
