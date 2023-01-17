#include <stdio.h>
char *getWord(char c); 
int main(void){
	char input;
	printf("input:"); 
	scanf("%c",&input);
	printf("%s\n",getWord(input));
}
char *getWord(char c){
	switch(c){
		case 'A':return "apple";
		case 'B':return "banna";
		case 'C':return "cat";
		case 'D':return "dog";
		default: return "none";
	}
}
