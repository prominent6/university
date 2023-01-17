#include <stdio.h>
int main(void){
//	int a[N]={1,4,2,8,0};
//	min=a[0];
//	for(int i=0;i<N;i++){
//		if(a[i]<min) min=a[i];
//	}

char str[][20] = {"Illegal month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
char min[10];
//min=str[0] //常量等于常量，错误
 strcpy(min,str[0]);
 for(int i=1;i<N;i++){
 	if(strcmp(min,str[i])==0) strcpy(min,str[i]);
 }
} 
