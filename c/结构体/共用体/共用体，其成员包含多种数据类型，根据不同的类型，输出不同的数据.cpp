#include <stdio.h>
union temp{
	int i;
	char c;
	float f;
	double d;
};
struct Student{
	union temp tp;
}stu;

int main(void){
	printf("输入成员类型:\n");
	char ch;
	scanf(" %c",&ch);
	printf("输入数字:\n");
	switch (ch){
		case 'i':
			scanf("%d",&stu.tp.i);
			printf("%d",stu.tp.i);
			break;
		case 'c':
			scanf("%c",&stu.tp.c);
			printf("%c",stu.tp.c);
			break;
		case 'f':
			scanf("%f",&stu.tp.f);
			printf("%f",stu.tp.f);
			break;
		case 'd':
			scanf("%lf",&stu.tp.d);
			printf("%lf",stu.tp.d);
			break;
	}
	return 0;
}
