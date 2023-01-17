#include <stdio.h>
int main(void){
	int a[3][3];
	int max[3];
	int min[3];
	int Max,Min;
	int maxl[3],minl[3];
	int flag=0;
	int i,j;
	printf("请输入二维数组:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		Max=a[i][0];
		maxl[i]=0;
		for(j=0;j<3;j++){
			if(a[i][j]>Max){
				Max=a[i][j];
				maxl[i]=j; //记下第i行的最大值出现在j列 
			}
			max[i]=Max;
		}
	}
	for(i=0;i<3;i++){
		Min=a[0][i];
		for(j=0;j<3;j++){
			if(a[j][i]<Min){
				Min=a[j][i];
//				minl[i]=i; //第j列的最小值出现在i行 
			}
			min[i]=Min;
		}
	}
	for(i=0;i<3;i++){
		int j=maxl[i];
		if(a[i][j]==min[j]){
			flag=1;
			printf("该二维数组的鞍点为%d:下标为（%d,%d).\n",min[j],i,j);
			break;
		} 
	}
	if(flag==0){
		printf("该二维数组中没有鞍点.\n");
	}
	return 0;
}
