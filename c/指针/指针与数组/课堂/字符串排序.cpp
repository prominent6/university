#include <stdio.h>
#include <string.h>
#define N 5
int main(void){
	//二维数组 
	char str[N][10]={'A','B','C','F','D'};
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(strcmp(str[j],str[i])<0){
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	//指针数组
	char *ptr[N]= {'A','B','C','F','D'};
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(strcmp(str[j],str[i])<0){
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
		}
	}
}
