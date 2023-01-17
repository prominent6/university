//#include <stdio.h>
//int main(void){
//    int a=0,b=0,GCD,LCM;
//    printf("Input a & b:");
//    scanf("%d %d",&a,&b);
//    for(int i=99;i>=1;i--){
//        GCD=a/i;
//        if(b%GCD==0){
//            printf("The GCD is:%d\n",GCD);
//            break;
//        }
//    }
//    for(int j=1;j<100;j++){
//        LCM=a*j;
//        if(LCM%b==0){
//            printf("The LCM is:%d\n",LCM);
//            break;
//        }
//    }
//    return 0;
//}

#include <stdio.h>
int  MaxCommonFactor(int a, int  b);
int main(void){
	int a=0,b=0;
	scanf("%d,%d",&a,&b);
	int result=MaxCommonFactor(a,b);
	if(result==-1)
	{
		printf("Input number should be positive!\n");
	} else {
		printf("Greatest Common Divisor of %d and %d is %d\n",a,b,result);
	}
} 
int  MaxCommonFactor(int a, int  b){
	if(a<0||b<0){
		return -1;
	} else {
		int t=a<b?a:b;
		for(int i=t;i>0;i--){
			if(a%i==0&&b%i==0){
				return i;
				//break;
			}
		}
	}

}



#include <stdio.h>

int Gcd(int a,int b) //求最大公约数
{
	    //1.穷举法 
	int i,t;
   if(a<=0||b<=0)  	return -1;
	t=a<b?a:b;
	for(i=t;i>0;i--)
	{if(a%i==0&&b%i==0)   return i;}
	//2.碾转相除法
      int r;
      do{
      	r=a%b;
      	a=b;
      	b=r;
	  }while(r!=0)
	  return a;
	  
	//3.更相减损术
	while(a!=b)
	{
		if(a>b) a=a-b;
		else if(b>a) b=b-a;
	}
	return a;
	//递归法
	if(a<0||b<0) return -1;
	else if(a>b) return Gcd(a-b,b);
	else if(a<b) return Gcd(a,b-a);
	else if(a=b) return a; 
}
 
int lcm(int a,int b) //最小公倍数
{
int lcm;
lcm=a*b/Gcd(a,b);//最小公倍数等于两数之积除以其最大公约数
return lcm;
}
int main(void){
	int a,b;
	printf("Input a & b:");
	scanf("%d %d",&a,&b);
	printf("The GCD is:%d\n",Gcd(a,b));
	printf("The LCM is:%d\n",lcm(a,b));
	return 0;

}

