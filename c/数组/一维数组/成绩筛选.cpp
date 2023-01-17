#include <stdio.h>

int main(void){
	int a[5]={80,90,100,50,0};
	int i,max=0,min=0;
	
	for(i=0;i<5;i++)
	{
		if(a[i]>max) 
		{
			max=a[i];
		} else {
			if(a[i]<min)
			{
				min=a[i];
			}
		}
		
	 } printf("最高分为：%d 最低分为：%d",max,min);
	
	return 0;
}
