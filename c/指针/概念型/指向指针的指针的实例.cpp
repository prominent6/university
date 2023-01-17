#include <stdio.h>
 
int main(void){
	char *cBooks[] {
	"¡¶A¡·",
	"¡¶B¡·",
	"¡¶C¡·",
	};
	char **a;
	char **b[2];
	a = &cBooks[2];
	b[0]=&cBooks[0];
	b[1]=&cBooks[1];
	
	printf("a:%s\n",*a);
	printf("b:\n");
	for(int i=0;i<3;i++){
		printf("%s\n",*b[i]);
	}
	return 0; 
} 
