#include <stdio.h>

int main(void){
	int left=23,you,move;
	printf("这里是23根火柴游戏！！\n");
	printf("注意：最大移动火柴数目为三根\n");
	do {
	printf("请输入移动的火柴数目：\n");
	scanf("%d",&you);
	printf("您移动的火柴数目为：%d\n",you);
	left-=you;
	printf("您移动后剩下的火柴数目为：%d\n",left);
	if(left==0) {
		printf("对不起！您输了！");
	} else {
		move=(left-1)%4;
		if(move==0){
			printf("计算机移动的火柴数目为：%d\n",1);
			left-=1;
			printf("计算机移动后剩下的火柴数目为：%d\n",left);
			
		} else if(move !=0){
			printf("计算机移动的火柴数目为：%d\n",move);
			left-=move;
			printf("计算机移动后剩下的火柴数目为：%d\n",left);
		}
		if(left==0){
	    	printf("恭喜您！您赢了！");
		}
		
	}
	}while(left!=0);
	return 0;
}
	
	
	
	
	
//	else if(left>3){
//		move=left%3+1; 
//	    printf("计算机移动的火柴数目为：%d\n",move);
//	    left -=move;
//	    printf("计算机移动后剩下的火柴数目为：%d\n",left);
//	    if(left==0){
//	    	printf("恭喜您！您赢了！");
//		}
//    } else if(left==3){
//	    printf("计算机移动的火柴数目为：%d\n",2);
//	    printf("计算机移动后剩下的火柴数目为：%d\n",1);
//	    left=1;
//	} else if(left ==2){
//		printf("计算机移动的火柴数目为：%d\n",1);
//	    printf("计算机移动后剩下的火柴数目为：%d\n",1);
//	    left=1;
//	} else {
//		printf("计算机移动的火柴数目为：%d\n",1);
//	    printf("计算机移动后剩下的火柴数目为：%d\n",0);
//	    left=0;
//	    printf("恭喜您！您赢了！");
//	}
//}while(left!=0);
//        return 0;
//}
