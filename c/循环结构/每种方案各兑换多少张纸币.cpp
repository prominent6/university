
//#include <stdio.h>
//int main(void){
//    int n,left,count1=0,project=0,count2=0;
//    printf("������һ���һ�������ֽ��:");
//    scanf("%d",&n);
//    for(int i=1;i<10;i++){
//        left-=10;
//        count1++;
//            for(int j=1;left>5;j++){
//                left -=5;
//                count2++;
//                if(count1+count2+left==n){
//                    project++;
//                    continue;
//                }
//                }
//            }
//    printf("10Ԫ%d�ţ�5Ԫ%d�ţ�1Ԫ%d��\n",count1,count2,left);
//    printf("�ܹ���%d�ַ���\n",project);
//}


#include<stdio.h>
int main()
{
    int s,w,y,n;
    int count=0;
    printf("������һ���һ�������ֽ��:");
    scanf("%d",&n);
    for (s=1;s<10;s++){    
	    for (w=1;w<20;w++){
            y=n-s-w;
            if(10*s+5*w+y==100){
    printf("10Ԫ%d�ţ�5Ԫ%d�ţ�1Ԫ%d��\n",s,w,y);
    count++;
    }
    }   
    }
	    printf("�ܹ���%d�ַ���\n",count);   
    return 0;
}

