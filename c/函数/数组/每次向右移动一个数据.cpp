#include <stdio.h>
#define N 6

void move(int arr[],int n);
void Print(int arr[],int n);
int main(void){
	int arr[N]={0};
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	Print(arr,N);
	for(int i=0;i<N-1;i++){
		move(arr,N);
	}
}
void Print(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void move(int arr[],int n){
	int temp=arr[5];
	for(int i=5;i>0;i--){
	arr[i]=arr[i-1];
	}
	arr[0]=temp;
	Print(arr,N);
}
