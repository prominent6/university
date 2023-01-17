#include <stdio.h>
int main(void){
	printf("Please enter a string:");
	char ch[20];
	gets(ch);
	char *str=ch;
	int cout=0;
	while(*str!='\0'){
		cout++;
		str++;
	}
	printf("The length of the string is: %u\n",cout);
	return 0;
}
