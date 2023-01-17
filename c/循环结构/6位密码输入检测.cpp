//我写的 
//#include <stdio.h>
//int main(void){
//	char ch;
//	printf("Input your password:\n");
//
//	for(int count=1;count<=6;count++)
//	{
//		scanf("%c",&ch);
//		while(getchar()=='\n') //判断是否按下回车键 
//		{	  
//			if(ch>='0'&&ch<='9')  
//			{
//			printf("%c, you have enter %d-bits number\n",ch,count);
//		    } else 
//			{
//			printf("error\n");
//		    }		
//     	}
//}
//	return 0;
//}



#include <stdio.h>
int main(void){
	int x=1;
	char ch;
    printf("Input your password:\n");
    while(x<=6){
    	scanf(" %c",&ch);
    	if(ch>='0'&&ch<='9'){
    		printf("%c, you have enter %d-bits number\n",ch,x);
    		x++;
		} else 
			{
			printf("error\n");
		    }
//		    while(getchar()!='\n');
	}
	return 0;
} 
