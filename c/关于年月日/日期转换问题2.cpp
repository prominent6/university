//����ʵ�ֺ������ض��ֵ 
#include <stdio.h>
int day[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
//������ȫ���� 
//�������ܣ�    �Ը�����ĳһ��ĵڼ��죬����������һ��ĵڼ��µڼ���
void  MonthDay(int year, int yearDay, int *pMonth, int *pDay);
int main(void){
	int y,yd;
	int py,pd;
	printf("Please enter year, yearDay:");
	scanf("%d,%d",&y,&yd);
	MonthDay(y,yd,&py,&pd);  //�����ʵ�� 
	printf("month = %d, day = %d\n",py,pd);
	return 0;
}
void  MonthDay(int year, int yearDay, int *pMonth, int *pDay){
	int i,leap;
	leap=(year%4==0&&year%100!=0||year%400==0);
	int cout=1,left=yearDay;
	for(i=1;i<12;i++){
		left-=day[leap][i];
		cout++;
		if(left<day[leap][i+1]) break;
	} 
	*pMonth=cout; //����������·�ֵ��ֵ��pMonth��ָ�ı��� 
	*pDay=left;   //����������պŸ�ֵ��pDay��ָ�ı��� 
 }
