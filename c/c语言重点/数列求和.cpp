//�ܸ磺scanf��getchar���� 
//#include <stdio.h>
//int main(void){
//    int a[20];
//    int sum=0;
//    printf("This program sums a series of integers.\n");
//    printf("Enter integers (0 to terminate):");    
//    //���ѭ����ʾ���������������飬������0'��ѭ��ֹͣ 
//    for(int j=0;getchar()!='0';j++){
//        scanf("%d",&a[j]);
//        }
//    //������������������ 
//    for(int n=0;n<20;n++){
//		sum+=a[n];
//            }
//    printf("The sum is: %d\n",sum);
//}

#include <stdio.h>
int main(void){
	printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate):");
    int a,sum=0;
    do
    {
    	scanf("%d",&a);
    	sum+=a;
	} while(a!=0);
	printf("The sum is: %d\n",sum);
	return 0;
} 
