#include <stdio.h>
#include <string.h>
int main(void){
	char str[20];
	char ch[]="secret"; 
	printf("Input Password:");
	scanf("%s",str);
	int result=strcmp(str,ch);
	if(result==0) printf("Correct password! Welcome to the system...");
	else if(result<0) printf("Invalid password!user input<password");
	else printf("Invalid password!user input>password");
	return 0;
}
