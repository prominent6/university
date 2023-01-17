#include <stdio.h>
#include <string.h> 
#define N 10
char ptr[N];   //得再搞一个数组来存
void Inverse(char str[]);
int main(void){
	char str[N];
	printf("Input a string:");
	gets(str);
	Inverse(str);
	printf("Inversed results:%s\n",ptr);
	return 0;
}
void Inverse(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++){
		ptr[i]=str[strlen(str)-1-i];
	} 
	ptr[i]='\0';
}
