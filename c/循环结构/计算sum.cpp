#include <stdio.h>
#include <math.h>
int main(void){
    int count=0;
    float sum=1.0,j=0;
    //����д����������� for(int i=1.0;i>=1e-6;i+=2,count++){
    for(int i=1;1.0/(i+2)>=1e-6;i+=2,count++){
        if(count%2==0){
            j=-1.0/(i+2);
        } else {
            j=1.0/(i+2);
        } 
        sum =+j;
    }
     
     
     
//    float sum = 0;
//    int i=1 , j = 0  ;     //  ��j��������
//    for(i=1; 1.0/(2*i-1)>1e-6;i++)
//    {
//        sum +=  pow(-1,j)*(1.0/(2*i-1));
//        j++;
//    }
    //���δ���û�����
	printf("sum=%.3f\n",sum); 
    return 0;
}
