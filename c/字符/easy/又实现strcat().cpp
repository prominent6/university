#include <stdio.h>
void strcat(char *ch1,char *ch2);
int main(void){
	char ch1[20],ch2[20];
	printf("Input the first string:");
	gets(ch1);
	printf("Input the second string:");
	gets(ch2);
	strcat(ch1,ch2);
	printf("The result is: %s\n",ch1);
	return 0;
}
void strcat(char *ch1,char *ch2){
	while(*ch1!='\0'){
		ch1++;
	}
	while(*ch2!='\0'){
		*ch1=*ch2;
		ch1++;
		ch2++;
	}
	*ch1=='\0';
}
