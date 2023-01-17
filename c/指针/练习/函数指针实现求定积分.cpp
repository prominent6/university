#include <stdio.h>
float Y1(float x);
float Y2(float x);
float Integral(float (*f)(float), float a, float b);
int main(void){
	printf("y1=%.2f\ny2=%.2f\n",Integral(Y1,0,1),Integral(Y2,0,3));
	return 0;
}
float Y1(float x){
	return 1+x*x;
}
float Y2(float x){
	return x/(1+x*x);
}
float Integral(float (*f)(float), float a, float b){
	float h=(b-a)/100;
	int i,n=100;
	float sum=0.0;
	for(i=0;i<n;i++){
		sum+=(*f)(a+i*h)+(*f)(a+(i+1)*h);
	}
	return sum*h/2;
}
