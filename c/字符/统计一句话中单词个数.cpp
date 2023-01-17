#include <stdio.h>
int main(void){
	int words=0,state=0;
	char ch;
	char sentence[60];
	printf("input£º\n");
	gets(sentence);
	for(int i=0;(ch=sentence[i])!='\0';i++){
		if(ch==' ')
		{ 
		state=0;
	    }
		else if(state==0) {
			state=1;
			words++;
		}
	}
	printf("%d",words);
} 
