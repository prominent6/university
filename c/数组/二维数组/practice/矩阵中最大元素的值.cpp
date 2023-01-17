#include <stdio.h>
#define M 3
#define N 4
int Max(int [M][N]); 
int main(void){
	int arr[M][N]={{1,2,3,4},{9,8,7,6},{10,-1,-4,4}};
	printf("max=%d\n",Max(arr));
}
int Max(int arr[M][N]){
	int max=arr[0][0];
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(arr[i][j]>max){
			max=arr[i][j];	
			}
		}
	}
	return max;
}
