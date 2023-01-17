#include <stdio.h>
int main(void){
	char name[100];
	char *p=name;
	printf("ÇëÊäÈëÄãµÄĞÕÃû£º");
	scanf("%s",name);
	while(*p!='\0'){
		putchar(*p);
		putchar(' ');
		p++;
	}
	return 0;
}
