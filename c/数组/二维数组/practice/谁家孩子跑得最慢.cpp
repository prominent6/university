#include <stdio.h>
#define M 3
#define N 3
int main(void){
	int a[M][N];
	a[0][0]=7; //�� 
	a[1][0]=8; //�� 
	a[2][0]=9; //�� 
//	char s[3]={"zhang","wang","li"}; 
int who;
	for(int i=4;i<6;i++){  //�ż�    ȡ6 
		for(int j=4;j<7;j++){  //���� 
			for(int k=4;k<7;k++){  //��� 
				if((i!=j&&j!=k&&i!=k)&& //���Լҵڶ������ӷ��������
				(15-i-a[0][0]!=15-j-a[1][0]&& //���Լҵ��������ӷ��������
				15-i-a[0][0]!=15-k-a[2][0]&&
				15-j-a[1][0]!=15-k-a[2][0]) 
				){
					a[0][1]=i;a[0][2]=15-i-a[0][0];
					a[1][1]=j;a[1][2]=15-j-a[1][0];
					a[2][1]=k;a[2][2]=15-k-a[2][0];
				}
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]==1){
				who=i;
			}
		}
	}
	if(who==0){
		printf("The last one arrived to end is a child from family Zhang.\n");
	} else if(who==1){
		printf("The last one arrived to end is a child from family Wang.\n");
	}else{
		printf("The last one arrived to end is a child from family Li.\n");
	}
	
	return 0;
}
