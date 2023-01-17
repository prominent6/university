#include <stdio.h>

int main(void){
	int area=0;
    float weight=0,Price=0;
    scanf("%d,%f",&area,&weight);
    if (area==0){
    	if(weight<=1&&weight>0){
    		Price=10.0;
    		printf("Price: %5.2f\n",Price);
    	} else {
    		Price=10.0+(int)weight*3;
    		printf("Price: %5.2f\n",Price);
    	} 
    } else	if(area==1){
          	if(weight<=1&&weight>0){
    		Price=10.0;
    		printf("Price: %5.2f\n",Price);
    	} else {
    		Price=10.0+(int)weight*4;
    		printf("Price: %5.2f\n",Price);
    	}
  	}  else if(area==2) {
    	if(weight<=1&&weight>0){
    		Price=15.0;
    		printf("Price: %5.2f\n",Price);
    	} else {
    		Price=15.0+(int)weight*5;
    		printf("Price: %5.2f\n",Price);
    	}
	} else	if(area==3) {
		if(weight<=1&&weight>0){
    		Price=15.0;
    		printf("Price: %5.2f\n",Price);
    	} else {
    		Price=15.0+(int)weight*6.5;
    		printf("Price: %5.2f\n",Price);
    	}
    } else	if(area==4) {
    	if(weight<=1&&weight>0){
    		Price=15.0;
    		printf("Price: %5.2f\n",Price);
    	} else {
    		Price=15.0+(int)weight*10;
    		printf("Price: %5.2f\n",Price);
        }
	} else if(weight<0||area<0||area>4) {
		printf("Error in Area\n");
	}
    return 0;
}

