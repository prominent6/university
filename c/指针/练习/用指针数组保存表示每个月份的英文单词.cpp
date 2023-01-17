#include <stdio.h>
int main(void){
	//Ö¸ÕëÊý×é
	char *month[13]= {"Illegal month", "January", "February", "March","April", "May", "June", "July", "August", "September","October", "November", "December"};
	int m;
	printf("Input month number:\n");
	scanf("%d",&m);
	if(m>=1&&m<=12){
		printf("month %d is %s\n",m,*(month+m));
	} else{
		printf("%s\n",*month);
	}
	return 0;
}
