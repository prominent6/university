//#include <stdio.h>
//
//int main(void)
//{
//	int take=0;
//	for(int j=0;;j++)
//	{
//		int sum=j;
//		for(int i=0;i<5;i++)
//		{
//			
//			take=(sum-1)/5;
//			sum-=take;
//		}
//		if(sum==0) 
//		{
//		printf("Total number of fish catched=%d\n",j);
//		break;
//	    }
//}
//        return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//    int n,flag,x,i,t=1;
//    for (n=6;t;n++)
//    {
//	    for (i=0;i<5;i++)
//        { 
//            if (i==0)
//           {
//              x=n;
//              flag=0;
//            }
//            if ((x-1)%5==0)
//            {
//                x=(x-1)*4/5;
//                flag++;
//             }
//            if (flag==5)
//            {
//             printf("Total number of fish catched=%d\n",n);
//             t=0;
//            }
//         }
// }
//     return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int sub(int n);
int sub(int n)
{
	static int i=0;
	if(n==1)
	{
		do{
			i++;
		}while(i%5!=0);
		return (i+1);
	} else {
		int t;
		do{
			t=sub(n-1);
		}while(t%4!=0);
		return (t/4*5+1);
	}
}
int main(void)
{
	printf("%d",sub(5));
}
