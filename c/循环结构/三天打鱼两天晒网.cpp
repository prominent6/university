#include<stdio.h>
int main()
{
	int year,month,day,x,a;
	int ye=1990;
	int sum=0;
	int i[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//����ƽ����·�����������
	int j[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};//����������·�����������
	scanf("%4d-%2d-%2d",&year,&month,&day);
//��������
	
//	year=x/10000;
//	month=(x%10000)/100;
//	day=x%100;
	
//	while((year<1990)||(month<1||month>12)||((month==2&&(year%4!=0&&year%400!=0)&&day>28)||(day>j[month])))
//	{
//		printf("�������ڴ�������������\n");
//		printf("�밴�������յ�˳��������������\n");
//		scanf("%d",&x);
//			year=x/10000;
//	        month=(x%10000)/100;
//	        day=x%100;
//	}//�ж����������Ƿ���ȷ
if(year<1990||month<1||month>12||day>j[month]||(month==2&&(!(year%4==0&&year%100!=0||year%400==0))&&day>28)){
		printf("Invalid input.");
	} else{
	for(;ye<year;ye++) //���������������
	{
		if((year%400==0)||(year%4==0&&year%100!=0))//�жϴ�����Ƿ������� 
		{
			sum+=366;//����������366
		}
		else
		{
			sum+=365;//ƽ��������365
		}
	}
	for(a=1;a<month;a++)//���������·�����
	{
		if((year%400==0)||(year%4==0&&year%100!=0)) 
		{
			sum+=j[a];//��������
		}
		else{
			sum+=i[a];//ƽ������
		}
	}
}
	sum+=day;
	if((sum%5==1)||(sum%5==2)||(sum%5==3))	printf("He is working.");
    else printf("He is having a rest."); 
	return 0;
}
