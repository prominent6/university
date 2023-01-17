//#include <stdio.h>
//
//double Factm(int m);
//double Factn(int n);
//double Factmn(int m,int n);
//int main(void){
//	int m,n;
//	printf("shuru");
//	scanf("%d,%d",&m,&n);
//	double Factm,Factn,Factmn;
//	Factm=Factm(m);
//	Factn=Factn(n);
//	Factmn=Factmn(m,n);
//	printf("%f",Factn/(Factm*Factmn));
//}
//double Factm(int m)
//{
//	if(m==0||m==1) return 1;
//	else return m*Factm(m-1); 
//}
//double Factn(int n){
//	if(n==0||n==1) return 1;
//	else return n*Factm(n-1); 
//}
//double Factmn(int m,int n)
//{
//	if(n==m||n==1+m) return 1;
//	else return (n-m)*Factm(n-m-1);
//}


#include <stdio.h>

long Fact(int n);
int main(void)
{
	int m,n;
	long ret;
	printf("shuru:");
	scanf("%d,%d",&m,&n);
	ret = Fact(m)/(Fact(m-n)*Fact(n));
	printf("%d",ret); 
}
long Fact(int n)
{
	if(n==0||n==1) return 1;
	else return n*Fact(n-1); 
}
