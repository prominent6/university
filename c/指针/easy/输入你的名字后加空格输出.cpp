#include <stdio.h>
int main(void){
	char name[100];
	char *p=name;
	printf("���������������");
	scanf("%s",name);
	while(*p!='\0'){
		putchar(*p);
		putchar(' ');
		p++;
	}
	return 0;
}
