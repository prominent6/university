#include <stdio.h>

int main(void){
    int h=0,m=0,h1=0,h2=0,h3=0;
    printf("�����밮��������ʱ�䣨24Сʱ�ƣ���22��35��: ");
    scanf("%d:%d",&h,&m);
    h1=h-5;
    if(h1<0){
    	h1=24+h1;
	}
    printf("��Ӧ�Ļ�ʢ��ʱ��Ϊ%d:%d\n",h1,m);
    h2=h+3;
    if(h2>24){
        h2=h2-24;
    }
    printf("��Ӧ��Ī˹��ʱ��Ϊ%d:%d\n",h2,m);
    h3=h+7;
    if(h3>24){
        h3=h3-24;
    }
    
    printf("��Ӧ�ı���ʱ��Ϊ%d:%d\n",h3,m);
    
    return 0;
}
