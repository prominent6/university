#include <stdio.h>
int main(void){
	char str[]="xxxxxx";
	char *target = str; // 
	int count = 0;
	
	while (*target++ !='\0'){
		count++;
	} 
	
	printf("�ܹ���%d���ַ���\n",count);
	return 0;
}
