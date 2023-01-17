#include <stdio.h>
int main(void){
	int arr[3][3]; // * 
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int max=arr[0][0];
	int row=0;
	for(int i=0;i<3;i++){
		int j=i;
		if(arr[i][j]>max){
			max=arr[i][j];
			row=i;
		}
	}
	printf("max=%d ,row=%d",max,row);
}

