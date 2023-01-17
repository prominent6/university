#include <stdio.h>
#include <string.h>
#define N 8
#define MAX_LEN 20
int main(void){
	char str[N][MAX_LEN];
	char *pStr[N];
	//实现  输入：多个字符串用空格分隔
	for(int i=0;i<N;i++){
		pStr[i]=str[i];
		scanf("%s",pStr[i]);
	}
	for(int i=0;i<N;i++){
		char *temp=NULL;
		for(int j=0;j<N;j++){
			if(strcmp(pStr[i],pStr[j])<0){
				temp=pStr[i];
				pStr[i]=pStr[j];
				pStr[j]=temp;
			}
		} 
	}
	for(int i=0;i<N;i++){
		printf("%s\n",pStr[i]);
	}
	return 0;
}

//使用swap()函数 
#include <stdio.h>
#include <string.h>
#define N 8
void swap(char *x,char *y);
int main(void){
	char str[N][20];
	char *pStr[N];
	int i,j;
	char *temp=NULL;
	for(i=0;i<N;i++){
		pStr[i]=str[i];
		scanf("%s",pStr[i]);
//		gets(pStr[i]);
	}
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(strcmp(pStr[i],pStr[j])<0){
//				temp=pStr[i];
//	            pStr[i]=pStr[j];
//            	pStr[j]=temp; 
				swap(pStr[i],pStr[j]);
			}
		}
	}
	for(i=0;i<N;i++){
		printf("%s\n",pStr[i]);
	}
}
void swap(char *x,char *y){
	char temp=NULL;
	temp=*x;
	*x=*y;
	*y=temp; 
}
