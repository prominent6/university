//将1~9这9个数字分成三组
//每组中的三个数排成一个三位的完全平方数
//要求每个数字必须且只能用一次

#include <stdio.h>
int array[9];       //存储三个三位数的个位的全局数组
int OK(int number,int *curPtr);
int main(void)
{
    int m;
    int count=1;
    for(m=111;m<=333;m++)
    {
        if(OK(m,array)&&OK(2*m,array+3)&&OK(3*m,array+6))   
		
         {
         	//第二个数从array[3]开始存，第三个数从array[6]开始存。
            printf("%d,%d,%d\n",m,2*m,3*m);
            count++;
         }
    }
    return 0;
}
 
int OK(int number,int *curPtr)      
// 判断number这个数中各个位上的数字在之前是否出现过，
//curPtr是指向该数字开始存储的位置
{
    int *i,*j;
    for(i=curPtr;i<curPtr+3;i++)
    {
        *i=number%10;    
        number/=10;
        if((*i)==0) return 0;     
		//判断输入的数字是否为0，为0则必不满足，返回0
        for(j=array;j<i;j++)
        {
            if((*i)==(*j)) return 0;  
			//只要输入的数字和前面某一个数字相同，则不满足
        }
    }
    return 1;
}
