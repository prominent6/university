#include <stdio.h>
int CountWords(char str[]);
int main(void){
	printf("Input a string:");
	char str[80];
	gets(str);
	printf("Numbers of words = %d\n",CountWords(str));
	return 0;
}
int CountWords(char str[]){
	int i,cout=0,state=0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' ') {
			state=0;
		} else if(state==0){
			state=1;
			cout++;
		}
	}
	return cout;
}
