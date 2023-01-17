#include <stdio.h>
#include <string.h>
void addspace(char s[]);
int main(void){
	char s[255];
	gets(s);
	addspace(s);
	puts(s);
	return 0;
}
void addspace(char s[]){
	int n=strlen(s);
	s[n*2]='\0';
	n--;
	while(n>=0){
		s[n*2]=s[n];
		s[n*2+1]=32;  //Ê¹Æä¿Õ¸ñ 
		n--;
	}
}
