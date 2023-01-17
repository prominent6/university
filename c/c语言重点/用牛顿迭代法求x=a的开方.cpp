//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	float a,x1,x0,i;
//	printf("Input a=? ");
//	scanf("%f",&a);
//	x0=a;
//    for(int i=1;i<=20&&(fabs(x0-x1)<0.00001);i++)
//    {
//    	x1=(x0+a/x0)/2.0;
//    	x0=x1;
//	}
//	printf("\na=%.6f,x=%.6f,i=%d",a,x1,i);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void cal(float a)
{
	int i=0;
	float x1 = 1;
	float x2 = 0;
	while (fabs(x2 - x1) >= 0.00001)
	{
		x1 = x2;
		x2 = (x1 + (a / x1))/2.0;
		i++;
	}
	printf("\na=%.6f,x=%.6f,i=%d",a,x1,i);
}
int main()
{
	float a;
	printf("Input a=? ");
	scanf("%f", &a);
	cal(a);
	//system("pause");
	return 0;
}

