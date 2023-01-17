#include <stdio.h>

int main(void){
//	int a=1;
//	int b=2;
//	int c=3;
//	int *p[3]={&a,&b,&c};
//	for (int i=0;i<3;i++){
//		printf("%d\n",p[i]); //输出所在地址
//	    printf("%d\n",*p[i]);  // 输出表示的值 
//	}


//    char *p[3] = {
//	   "排球比赛加油！", "ccf csp加油！", "我会努力！" 
//	};
//	 	for (int i=0;i<3;i++){
//		printf("%s\n",p[i]); //输出字符串 
//	   printf("%s\n",*p[i]);   //无输出 
//	}


    //错误示例 
	//指针需要地址（变量） 有括号的数组指针需要数组  
//    int (*p)[3] = {1,2,3};  
//    //[Error] scalar object 'p' requires one element in initializer
//
//    int  temp[3]={1,2,3};
//    int  (*p)[3]=temp;
//    //[Error] cannot convert 'int*' to 'int (*)[3]' in initialization


//正确实例
 int  temp[3]={1,2,3};
 int  (*p)[3]=&temp; 
 for(int i=0;i<3;i++){
     	printf("%d\n",*(*p+i));
	}
	 
//对比
 int array[3]={1,2,3};
 int *p = array;
 
 for(int i=0;i<3;i++){
 	printf("%d\n",*(p + i));
 }
  
	return 0;
}
