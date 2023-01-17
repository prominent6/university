#include <stdio.h>
#include <string.h>
#define N 5
#define MAX_LEN 80
int main(void){
	printf("Input five countries' names:\n");
	char str[N][MAX_LEN];
	char *pStr[N];
	for(int i=0;i<5;i++){
		pStr[i]=str[i]; //指向第一行  *
		gets(pStr[i]);
	}
	for(int i=0;i<5;i++){
		if(strcmp(pStr[0],pStr[i])>0){
			pStr[0]=pStr[i];
		}
	}
	printf("The minimum is:%s\n",pStr[0]);
	return 0;
}
