#include<stdio.h>

int main()
{
	struct stu{
		int real;
		int imag;
	};
	struct stu s[2];
	int i,j;
	int pr_real=0,pr_imag=0;
	for(i=0;i<2;i++){
		scanf("%d %d",&s[i].real,&s[i].imag); 
	}
//    int a1=3,a2=4,b1=5,b2=6,m,n;
//    int c1=10,c2=20,d1=30,d2=40;
    pr_real=s[0].real*s[1].real-s[0].imag*s[1].imag;
    pr_imag=s[0].real*s[1].imag+s[0].imag*s[1].real;
    printf("(%d+%di)*(%d+%di)=" "(%d+%di)\n",s[0].real,s[0].imag,s[1].real,s[1].imag,pr_real,pr_imag);
//    printf("(%d+%di)*(%d+%di)=" "(%d+%di)\n",a1,a2,b1,b2,a1*b1-a2*b2,a1*b1+a2*b2-1);
//    printf("(%d+%di)*(%d+%di)=" "(%d+%di)\n",c1,c2,d1,d2,c1*d1-c2*d2,c1*d1+c2*d2-100);

    return 0;
}

