#include <stdio.h>

int main(void){
    float sum=100,i=sum/2; //i=50
    for(int j=2;j<10;j++){
	    sum+=(2*i);
        i=i/2;
    }
    printf("��10�����ʱ������%f�ס�\n"  "��10�η���%f�ס�\n",sum,i);
    return 0;
    
}
