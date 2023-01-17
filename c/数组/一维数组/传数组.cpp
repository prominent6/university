#include <stdio.h>

void get_array(int a[10]);
void get_array(int a[10]){
	for(int i=0;i<3;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}
int main(void){
	int a[3]={1,2,3};
	get_array(a);
	return 0;
}
//get_array中可改变数组值 
