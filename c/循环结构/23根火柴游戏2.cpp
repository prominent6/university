#include <stdio.h>

int main(void){
	int left=23,you,move;
	printf("������23�������Ϸ����\n");
	printf("ע�⣺����ƶ������ĿΪ����\n");
	do {
	printf("�������ƶ��Ļ����Ŀ��\n");
	scanf("%d",&you);
	printf("���ƶ��Ļ����ĿΪ��%d\n",you);
	left-=you;
	printf("���ƶ���ʣ�µĻ����ĿΪ��%d\n",left);
	if(left==0) {
		printf("�Բ��������ˣ�");
	} else {
		move=(left-1)%4;
		if(move==0){
			printf("������ƶ��Ļ����ĿΪ��%d\n",1);
			left-=1;
			printf("������ƶ���ʣ�µĻ����ĿΪ��%d\n",left);
			
		} else if(move !=0){
			printf("������ƶ��Ļ����ĿΪ��%d\n",move);
			left-=move;
			printf("������ƶ���ʣ�µĻ����ĿΪ��%d\n",left);
		}
		if(left==0){
	    	printf("��ϲ������Ӯ�ˣ�");
		}
		
	}
	}while(left!=0);
	return 0;
}
	
	
	
	
	
//	else if(left>3){
//		move=left%3+1; 
//	    printf("������ƶ��Ļ����ĿΪ��%d\n",move);
//	    left -=move;
//	    printf("������ƶ���ʣ�µĻ����ĿΪ��%d\n",left);
//	    if(left==0){
//	    	printf("��ϲ������Ӯ�ˣ�");
//		}
//    } else if(left==3){
//	    printf("������ƶ��Ļ����ĿΪ��%d\n",2);
//	    printf("������ƶ���ʣ�µĻ����ĿΪ��%d\n",1);
//	    left=1;
//	} else if(left ==2){
//		printf("������ƶ��Ļ����ĿΪ��%d\n",1);
//	    printf("������ƶ���ʣ�µĻ����ĿΪ��%d\n",1);
//	    left=1;
//	} else {
//		printf("������ƶ��Ļ����ĿΪ��%d\n",1);
//	    printf("������ƶ���ʣ�µĻ����ĿΪ��%d\n",0);
//	    left=0;
//	    printf("��ϲ������Ӯ�ˣ�");
//	}
//}while(left!=0);
//        return 0;
//}
