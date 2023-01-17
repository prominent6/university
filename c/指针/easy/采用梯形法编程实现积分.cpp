#include <stdio.h>
float Integral(float (*f)(float), float a, float b);
float func1(float x){   //参数类型 
	return 1+x*x;
}
float func2(float x){ //参数类型 
	return x/(1+x*x); 
} 
int main(void){
	printf("y1=%f\ny2=%f\n",Integral(func1,0,1),Integral(func2,0,3));
}
float Integral(float (*f)(float), float a, float b){
	float span=(b-a)/100;
	float sum=0;
	int i;
	for(i=0;i<100;i++){
		sum+=((*f)(a+span*i)+(*f)(span*(i+1)))*span/2;
	} 
	return sum;
}

