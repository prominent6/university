#include <stdio.h>

int main(void){
	int array[][4] = {
	{0,1,2,3},
	{4,5,6,7},
	{8,9,0,1}
	};
	int (*p)[4] = array;
 //int (*p)[3][4]=&array;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%2d",*(*(p+i)+j));
//          printf("%2d",*(*(*p+i)+j));
		}
		printf("\n");
	}
	return 0;
}
