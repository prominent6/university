#include <stdio.h>
struct date_rec{
	int day;
	int month;
	int year;
};
int func(struct date_rec arr[]){
	int i,flag=0;
	if(arr[0].year > arr[1].year) //��if-else 
		return 1;	
	else if(arr[0].year < arr[1].year)
		return -1;
	else 
	{
		if(arr[0].month > arr[1].month)
			return 1;
		else if(arr[0].month < arr[1].month)
			return -1;
		else 
		{
			if(arr[0].day > arr[1].day)
				return 1;
			else if(arr[0].day < arr[1].day)
				return -1;
			else 
				return 0;
		}
	}
}
int main(void){
	struct date_rec arr[2];
	int i;
	for(i=0;i<2;i++){
		printf("�����뵱ǰ���ڣ��� �� �գ���");
		scanf("%d%d%d",&arr[i].year,&arr[i].month,&arr[i].day);
	}
	for(i=0;i<2;i++){
		printf("��ǰ���ڣ�%d��%d��%d�գ�\n",arr[i].year,arr[i].month,arr[i].day);
	}
	int r=func(arr);
	if(r==0) printf("����������ͬ��");
	else if(r==1) printf("��һ���������ڵڶ������ڣ�");
	else printf("��һ���������ڵڶ������ڣ�") ;
	return 0;
}
