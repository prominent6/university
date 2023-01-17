#include <stdio.h>
#define N 30
/* 函数功能：计算最高分及其相应学生的学号 */
void FindMax(int score[],long num[],int n,int *pMaxScore,long *pMaxNum);
int main(void){
	long num[N];
	int score[N];
	int n,pMaxScore,i;
	long pMaxNum;
	printf("How many students?");
	scanf("%d",&n);
	printf("Input student’s ID and score:\n");
	for(i=0;i<n;i++){
		scanf("%ld %d",&num[i],&score[i]);
	} 
	FindMax(score,num,n,&pMaxScore,&pMaxNum);
	printf("maxScore = %d, maxNum = %ld\n",pMaxScore,pMaxNum); 
	return 0;
}
void FindMax(int score[],long num[],int n,int *pMaxScore,long *pMaxNum){
	int i;
	*pMaxScore=score[0];
	*pMaxNum=num[0]; 
	for(i=1;i<n;i++){
		if(score[i]>*pMaxScore){
			*pMaxScore=score[i];
			*pMaxNum=num[i];
		}
	}
}
