#include <stdio.h>

struct Date
{
	int year;
	int month;
	int day;
};  //ĩβ�зֺ� 
struct Book  //�ṹ������ 
{
	char title[128];
	char author[40];
	float price;
	struct Date date;
	char publisher[40];
}book={  //��ʼ��   //float�Ͳ�Ҫ���� 
	"������","С��",48.5,{2022,2,2},"�廪��ѧ������" 
}; //}; 

int main(void)
{
	struct Book *pt;
	pt=&book;
	//struct Book book; //����ṹ�����ͱ��� 
//	printf("������������");
//	scanf("%s",book.title);
//	printf("�������ۼۣ�");
//	scanf("%f",&book.price); 
//	
//ͨ���ṹ��ָ����ʽṹ���Ա�ķ���һ 
	printf("������%s\n",(*pt).title);
	printf("�ۼۣ�%.2f\n",(*pt).price);
	printf("�������ڣ�%d-%d-%d\n",(*pt).date.year,(*pt).date.month,(*pt).date.day);
	
//������  ��ͷ�� 
    printf("������%s\n",pt->title);
	printf("�ۼۣ�%.2f\n",pt->price);
	printf("�������ڣ�%d-%d-%d\n",pt->date.year,pt->date.month,pt->date.day);
	return 0;
}
