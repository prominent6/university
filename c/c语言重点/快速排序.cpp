#include <stdio.h>

void quick_sort(int array[],int left,int right);

int main(void)
{
	int array[]={10,20,60,30,50,80,11,22,90};
	
	int length=sizeof(array)/sizeof(array[0]);   //
	quick_sort(array,0,length-1);
	for(int i=0;i<length;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
void quick_sort(int array[],int left,int right)
{
	int i=left;
	int j=right;
	int temp,pivot;
	
	pivot = array[(left+right)/2];
	while(i<=j)
	{
		//直到找到大于等于的数才跳出循环 
		while(array[i]<pivot)
		{
			i++;
		}
		while(array[j]>pivot)
		{
			j--;
		}
		if(i<=j)
		{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
			i++;
			j--;
		}
	}
	if(left<j)
	{
		quick_sort(array,left, j);
	}
	if(i<right)
	{
		quick_sort(array,i,right);
	 } 
}
