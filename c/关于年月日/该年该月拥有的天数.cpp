#include <stdio.h>
#define MONTHS 12 
int main(void){
	int year,month;
	int days[2][MONTHS]={{31,28,31,30,31,30,31,31,30,31,30,31},
	{31,29,31,30,31,30,31,31,30,31,30,31}};
	
//	do{
//		printf("Input year,month:");
//	    scanf("%d,%d",&year,&month);
//	} while(month<1||month>12);
//	
//	if((year%4==0)&&(year%100!=0)||(year%400==0)){
//		printf("The number of days is %d\n",days[1][month-1]);
//	} else{
//		printf("The number of days is %d\n",days[0][month-1]);
//    }
//    return 0;
//
	
	while(true){
		printf("Input year,month:");
	    scanf("%d,%d",&year,&month);
	    if(month<1||month>12){
		    continue;
	    } else if(year%4==0&&year%100!=0||year%400==0){
		    printf("The number of days is %d\n",days[1][month-1]);
		    break;
	    } else{
		    printf("The number of days is %d\n",days[0][month-1]);
		    break;
	    }
	}
	return 0;
 
	
}
