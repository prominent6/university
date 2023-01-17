//´Óa½èÖúcµ½b 
#include <stdio.h>
#include <math.h>
int count=0;
void hant(int n,char from,char by,char to);
//void move(int n,char from,char to);
int main(void)
{
	int n;
	
	printf("Please enter the number of discs:");
	scanf("%d",&n);
		hant(n,'a','c','b');
		printf("\tTotal:%d\n",count);
		return 0;
}

void move(int n,char from,char to)
{
		printf("%2d-(%2d):%c==>%c\n",++count,n,from,to);
}
 void hant(int n,char from,char by,char to)
{
	if(n==1)
	{
//		printf("%2d-(%2d):%c==>%c\n",++count,n,from,to);
		move(n,from,to);
	} else 
	{
		hant(n-1,from,to,by);
//		printf("%2d-(%2d):%c==>%c\n",++count,n,from,to);
		move(n,from,to);
		hant(n-1,by,from,to);
	}
}



//#include <stdio.h>
//#include <stdlib.h>
//int count=0;
//void han(char a,char b,char c,int n)
//{
//	if(n==1)
//	printf("%2d-(%2d):%c==>%c\n",++count,n,a,b);
//	else
//	{
//		han(a,b,c,n-1);
//		printf("%2d-(%2d):%c==>%c\n",++count,n,a,b);
//		han(c,a,b,n-1);
//	}
//}
//
//int main()
//{
//	int n;
//	printf("Please enter the number of discs:");
//	scanf("%d",&n);
//	han('a','b','c',n);
//    return 0;
//}

