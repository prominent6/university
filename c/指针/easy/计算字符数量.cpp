#include <stdio.h>
int main(void){
	char str[]="xxxxxx";
	char *target = str; // 
	int count = 0;
	
	while (*target++ !='\0'){
		count++;
	} 
	
	printf("总共有%d个字符！\n",count);
	return 0;
}
