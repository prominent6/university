#include <stdio.h>
#define N 1000
void fun(int x,int *pp,int *n);
int main(void){
	int x,n;
	int i,j;
	int a[N];
	printf("input number:");
	scanf("%d",&x);
	fun(x,a,&n);
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	} 
	printf("\n");
	return 0; 
}
void fun(int x,int *pp,int *n){
	int i,j;
	*n=0;
	for(i=2;i<=x;i++){
		if(x%i==0&&i%2==0){
			*pp=i;
			pp++;
			(*n)++;  //ÓÐÀ¨ºÅ 
		}
	}
}
