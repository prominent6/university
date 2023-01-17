#include <stdio.h>
void copy(char *ch1,char *ch2);
int main(void){
	char ch1[20],ch2[20];
	printf("Input a string:");
	gets(ch1);
	copy(ch1,ch2);
	printf("The copy is:%s",ch2);
	return 0;
}
void copy(char *ch1,char *ch2){
	int i=0;
	while(ch1[i]!='\0'){
		ch2[i]=ch1[i];
		i++;
	}
	ch2[i]='\0';
}
