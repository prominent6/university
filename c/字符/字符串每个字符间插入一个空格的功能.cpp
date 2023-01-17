#include <stdio.h>
void insert(char str[]);
int main(void){
	int i;
	printf("Input a string:");
	char ch[20];
	scanf("%s",ch);
	insert(ch);
	printf("Insert results:%s\n",ch);

	return 0;
}
void insert(char str[]){
	int n=0;
	while(str[n]) n++;
	str[2*n]='\0';
	n--;
	while(n>=0){
		str[2*n]=str[n];
		str[2*n+1]=32; //使其为空格 
		n--;
	}
}
