#include <stdio.h>

int main(void){
//	int a=1;
//	int b=2;
//	int c=3;
//	int *p[3]={&a,&b,&c};
//	for (int i=0;i<3;i++){
//		printf("%d\n",p[i]); //������ڵ�ַ
//	    printf("%d\n",*p[i]);  // �����ʾ��ֵ 
//	}


//    char *p[3] = {
//	   "����������ͣ�", "ccf csp���ͣ�", "�һ�Ŭ����" 
//	};
//	 	for (int i=0;i<3;i++){
//		printf("%s\n",p[i]); //����ַ��� 
//	   printf("%s\n",*p[i]);   //����� 
//	}


    //����ʾ�� 
	//ָ����Ҫ��ַ�������� �����ŵ�����ָ����Ҫ����  
//    int (*p)[3] = {1,2,3};  
//    //[Error] scalar object 'p' requires one element in initializer
//
//    int  temp[3]={1,2,3};
//    int  (*p)[3]=temp;
//    //[Error] cannot convert 'int*' to 'int (*)[3]' in initialization


//��ȷʵ��
 int  temp[3]={1,2,3};
 int  (*p)[3]=&temp; 
 for(int i=0;i<3;i++){
     	printf("%d\n",*(*p+i));
	}
	 
//�Ա�
 int array[3]={1,2,3};
 int *p = array;
 
 for(int i=0;i<3;i++){
 	printf("%d\n",*(p + i));
 }
  
	return 0;
}
