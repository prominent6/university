 #include <stdio.h>
int main(void){
    int x=0,b0=0,b1=0,b2=0,y=0;
    printf("Input x:");
    scanf("%d",&x);
    if(x<0) 	x=0-x;
	
    b0=x/100;     //�������ֵİ�λ��
    b1=(x-b0*100)/10;  //�������ֵ�ʮλ 
    b2=x%10;       //�������ֵĸ�λ 
    y=b2*100+b1*10+b0;
    printf("y = %d\n",y);
    
    return 0;
}
