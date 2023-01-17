 #include <stdio.h>
int main(void){
    int x=0,b0=0,b1=0,b2=0,y=0;
    printf("Input x:");
    scanf("%d",&x);
    if(x<0) 	x=0-x;
	
    b0=x/100;     //输入数字的百位数
    b1=(x-b0*100)/10;  //输入数字的十位 
    b2=x%10;       //输入数字的个位 
    y=b2*100+b1*10+b0;
    printf("y = %d\n",y);
    
    return 0;
}
