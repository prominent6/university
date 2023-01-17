////––÷∏’Î 
//#include <stdio.h>
//#define M 3
//#define N 4
//void Input(int (*p)[4],int m,int n); 
//int FindMax(int (*p)[4],int m,int n,int *pRow,int *pCol);
//int main(void){
//	int i,j,pr,pc;
//	int arr[M][N]; 
//	printf("Please input your data:\n");
//	Input(arr,M,N);
//	int max=FindMax(arr,M,N,&pr,&pc);
//	printf("The maximum is %d, which is in row %d, colum %d\n",max,pr,pc);
//	return 0; 
//}
//void Input(int (*p)[4],int m,int n){
//	int i,j;
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			scanf("%d",*(p+i)+j);
//		}
//	}
//}
//int FindMax(int (*p)[4],int m,int n,int *pRow,int *pCol){
//	int i,j;
//	int max=p[0][0];
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			if(p[i][j]>max){
//				max=p[i][j];
//				*pRow=i;
//				*pCol=j;
//			}
//		}
//	}
//	return max;
//}


#include <stdio.h>
#define N 10
int FindMax(int num[], int n, int *pMaxPos);
main()
{
	int num[N], maxValue, maxPos, minValue, minPos, i;	
	printf("Input %d numbers:\n",N);
	for (i=0; i<N; i++)
	{
		scanf("%d", &num[i]);                  
	}                        
	maxValue = FindMax(num, N, &maxPos);  
	printf("Max=%d, Position=%d\n",	 maxValue, maxPos);    
}
int FindMax(int num[], int n, int *pMaxPos)  
{
	int i, max = num[0];
	*pMaxPos=0;
	for (i=1; i<n; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
			*pMaxPos = i;
		}
	} 	
	return max;
}
