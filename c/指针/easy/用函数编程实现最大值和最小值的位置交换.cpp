#include <stdio.h>
#define N 10
void exchange(int arr[],int n);
int main(void){
	int n,i;
	int arr[N];
	printf("Input n(n<=10):");
	scanf("%d",&n);
	printf("Input %d numbers:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	exchange(arr,n);
	printf("Exchange results:");
	for(i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
	return 0;
}
void exchange(int arr[],int n){
	int i,r,c;
	int max=arr[0],min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			r=i;
		}else if(arr[i]<min){
			min=arr[i];
			c=i;
		}
	}
	int temp=arr[r];
	arr[r]=arr[c];
	arr[c]=temp;
}
