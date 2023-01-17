
//Œ“£∫ 
//#include <stdio.h>
//int main(void){
//	for(int i;;i++){
//		if(i%8==1){
//			 int s1 = i/8;
//			 if(s1%8==1){
//			 	int s2=s1/8;
//			 	if(s2%8==7){
//			 		int a=s2/8;
//			 		if(i%17==4){
//			 			int s3=i/17;
//			 			if(s3%17==15){
//			 				int s4=s3/17;
//			 				if(s4==2*a){
//			 					printf("The required number is :%d\n",i);
//			 					break;
//							 } else {
//			continue;
//		}
//						 } else {
//			continue;
//		}
//					 } else {
//			continue;
//		}
//				 } else {
//			continue;
//		}
//			 } else {
//			continue;
//		}
//		} else {
//			continue;
//		}
//	}
//    return 0;
//}



#include <stdio.h>
int main(void)
{
	int y=0,x=1;
	
	for(;x<=1000;x++)
	{
    	if(((2*x*17+15)*17+4)==(((x*8+7)*8+1)*8+1))
		{
			y= (2*x*17+15)*17+4;
			printf("The required number is :%d\n",y);
    		break;
    }
  }
    return 0;

} 

