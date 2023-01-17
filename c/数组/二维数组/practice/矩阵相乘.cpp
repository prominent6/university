#include <stdio.h>
main(){
	int arra[2][3];
	int arrb[3][2];
	int arrc[2][2];
	int num=0;
	int m=0,n=0;
	printf("Input 2*3 matrix a:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&arra[i][j]);
		}
	}
	printf("Input 3*2 matrix b:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&arrb[i][j]);
		}
	}
	
	//自己写的，系统得分为0 
	for(int j=0;j<2;j++){
		for(int i=0;i<3;i++){
		    arrc[m][n]+=arra[j][i]*arrb[i][n];
		    arrc[m][n+1]+=arra[j][i]*arrb[i][n+1];
	    }
	    m++;
	}
	//搜的 
	for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arrc[i][j] =   0 ;
            for (int k = 0; k < 3; k++)
            {
                arrc[i][j] = arrc[i][j] + arra[i][k] * arrb[k][j] ;
            }
        }
    }
	printf("Results:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%6d",arrc[i][j]);
		}
		printf("\n");
	}
}


