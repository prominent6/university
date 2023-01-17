#include <stdio.h>

int main(void){
    int m,d,y;
    printf("Enter date (mm/dd/yy):");
    scanf("%d/%d/%d",&m,&d,&y);
    
    if(m>=1&&m<=12&&d>=1&&d<=31)
    {
    switch (d)
    {
	
    case 1: case 21: case 31:
    	printf("Dated this %dst",d);
    	break;
	case 2: case 22:
		printf("Dated this %dnd",d);
		break;
	case 3: case 23:
		printf("Dated this %drd",d);
		break;
    case 4:case 5:case 6:case 7:case 8:case 9:case 10: case 11:case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 24: case 25: case 26: case 27: case 28: case 29:
    	printf("Dated this %dth",d);
    	break;
}
    switch (m)
    {
    	case 1:
    		printf(" day of January");
    		break;
    	case 2:
    		printf(" day of February");
    		break;
    	case 3:
    		printf(" day of March");
    		break;
    	case 4:
    		printf(" day of April");
    		break;
    	case 5:
    		printf(" day of May");
    		break;
    	case 6:
    		printf(" day of June");
    		break;
    	case 7:
    		printf(" day of July");
    		break;
    	case 8:
    		printf(" day of August");
    		break;
    	case 9:
    		printf(" day of September");
    	case 10:
    		printf(" day of October");
    		break;
    	case 11:
    		printf(" day of November");
    		break;
    	case 12:
    		printf(" day of December");
	}
	printf(", 19%.2d.\n",y);
        return 0;
    
} else {
    	    printf("Input error!\n");
}
	
        
}
