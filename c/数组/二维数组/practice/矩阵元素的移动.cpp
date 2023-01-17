#include <stdio.h>
int main(void){
	int temp;
	int a[2][3]={{1,4,6},{8,10,12}};
	for(int i=0;i<2;i++){
		temp=a[i][2];
		for(int j=2;j>0;j--){
			a[i][j]=a[i][j-1];
		}
		a[i][0]=temp;
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%6d",a[i][j]);
		}
		printf("\n");
	}
} 
