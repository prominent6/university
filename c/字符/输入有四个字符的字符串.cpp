//�� 
//#include <stdio.h>
//
//int main(void){
//	char ch[4];
//	int a[4];
//	printf("�������ĸ������ַ���");
//	for(int i=0;i<4;i++) {
//		scanf("%c",&ch[i]);
//		if(ch[i]<'0'||ch[i]>'9')
//		{
//			printf("�з������ַ���");
//			break;
//		}
//		a[i]=ch[i];
//	}
//	for(int j=0;j<4;j++){
//		printf("%d\n",a[j]);
//	}
//	printf("���������ֵ+1��Ϊ%d\n",10000*a[0]+1000*a[1]+100*a[2]+10*a[3]+a[4]+1);
//	
//	return 0;
//} 


#include<stdio.h>
#include<math.h>
int main()
{
    int a = 0, sum = 0;
    char A[5];
    A[4] = '\0';
    printf("�������ĸ������ַ���");
    for (a = 0; a < 4; a++)
    {
        A[a] = getchar();           //ѧ�� 
        if (A[a] > 57 || A[a] < 48)
        {
            printf("�з������ַ���");
            goto end;
        }
    }
    for (a = 0; a < 4; a++)
    {
        sum += (A[a] - 48) * pow(10, (3 - a)); //
    }
    printf("���������ֵ+1��Ϊ%d\n", sum + 1);
end:
    return 0;
}
