#include <stdio.h>

int main(void)
{
	int lines=0,words=0,chars=0;
	char string[81];
	char ch;
	int state=0;
	gets(string);
	for(int i=0;(ch=string[i])!='\0';i++)
	{
		if(ch!=' ')	chars++; //不确定是否算上空格 
		if(ch=='\n') lines++;
		if(ch==' ')
		{ 
		state=0;
	    }
		else if(state==0) {
			state=1;
			words++;
		} 
 	}
 	printf("%d %d %d",lines,chars,words);
 	return 0;
}
