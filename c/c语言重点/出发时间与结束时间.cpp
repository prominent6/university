#include <stdio.h>

int main(void){
//    int h=0,m=0,h1=0,m1;
//    printf("请输入h:m\n");
//    scanf("%d:%d",&h,&m);
//    h1=23+h;
//    m1=45+m;
//    
//    if(m1>=60){
//    	m1=m1-60;
//    	h1=h1+1;
//	} 
//	if(h1>=24){
//		h1=h1-24;
//	}
//   
        printf("时间为：%d:%d",h1,m1);
    return 0;

    int start =23*3600+30*60;
	int duration=1*3600+17*60;
	int end = start+duration;
	
	int hour=end/3600%24;
	int second=end%60;
	int minute=end/60%60; 
}
