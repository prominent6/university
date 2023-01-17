//#include <stdio.h>
//int swap(int x,int y);
//int swap(int x,int y){
//	int temp;
//	temp=x;
//	x=y;
//	y=temp;
//	printf("x=%d,y=%d\n",x,y);   //x=4,y=3 
//}
//int main(void){
//     int x=3,y=4;
//     swap(x,y);
//	 printf("x=%d,y=%d\n",x,y); //x=3,y=4
//	 return 0;	
//}
////不在同一作用域 


//指针 
#include <stdio.h>
int swap(int *x,int *y);
int swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("x=%d,y=%d\n",*x,*y);
}
int main(void){
     int x=3,y=4;
     swap(&x,&y);
	 printf("x=%d,y=%d\n",x,y);
	 return 0;	
}
//都为x=4,y=3 



