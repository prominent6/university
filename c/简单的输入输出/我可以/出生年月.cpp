#include <stdio.h>

int main(void){
    int y=0,m=0;
    printf("Input year,month:");
    scanf("%d,%d",&y,&m);
    
    int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    
    if(y>1&&m>=1&&m<=12){
    	if((y%4==0&&y%100!=0)||y%400==0){
    		if(m==2){
    		printf("%d days\n",arr[1]+1);	
			} else {
				printf("%d days\n",arr[m-1]);
			}
		} else {
			printf("%d days\n",arr[m-1]);
		}
		if(m>=3&&m<=5){
        printf("The season is spring\n");
    } else if(m>=6&&m<=8){
        printf("The season is summer\n");
    } else if(m>=9&&m<=11){
        printf("The season is autumn\n");
    } else if(m==1||m==2||m==12){
        printf("The season is winter\n");
    } 
	} else{
		printf("Input error!\n");
	}
    return 0;
}
