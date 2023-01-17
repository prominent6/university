#include <stdio.h>
#include <Windows.h> 
#include <string.h>

int main(void){
	char line[32];
	char*ret;
	
	ret=gets(line);
	printf("line=%s\n",line);
	printf("ret=%s\n",line);
	
	system("pause");
	return 0;
	
}
