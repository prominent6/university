#include <stdio.h>
#include <math.h>

int main(void){
	float a,b,c,h; 
	printf("Please enter the coefficients a,b,c:\n");
	scanf("%f,%f,%f",&a,&b,&c);
	h=b*b-4*a*c;
	
	if(h>=0) {
		printf("x1=%7.4f, x2=%7.4f\n",(-b+sqrt(h))/(2*a),(-b-sqrt(h))/(2*a));
	} else {
		printf("error!");
		
	}
	return 0;

}
