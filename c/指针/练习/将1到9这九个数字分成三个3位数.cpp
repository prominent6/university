//��1~9��9�����ֳַ�����
//ÿ���е��������ų�һ����λ����ȫƽ����
//Ҫ��ÿ�����ֱ�����ֻ����һ��

#include <stdio.h>
int array[9];       //�洢������λ���ĸ�λ��ȫ������
int OK(int number,int *curPtr);
int main(void)
{
    int m;
    int count=1;
    for(m=111;m<=333;m++)
    {
        if(OK(m,array)&&OK(2*m,array+3)&&OK(3*m,array+6))   
		
         {
         	//�ڶ�������array[3]��ʼ�棬����������array[6]��ʼ�档
            printf("%d,%d,%d\n",m,2*m,3*m);
            count++;
         }
    }
    return 0;
}
 
int OK(int number,int *curPtr)      
// �ж�number������и���λ�ϵ�������֮ǰ�Ƿ���ֹ���
//curPtr��ָ������ֿ�ʼ�洢��λ��
{
    int *i,*j;
    for(i=curPtr;i<curPtr+3;i++)
    {
        *i=number%10;    
        number/=10;
        if((*i)==0) return 0;     
		//�ж�����������Ƿ�Ϊ0��Ϊ0��ز����㣬����0
        for(j=array;j<i;j++)
        {
            if((*i)==(*j)) return 0;  
			//ֻҪ��������ֺ�ǰ��ĳһ��������ͬ��������
        }
    }
    return 1;
}
