//我 
//#include <stdio.h>
//
//int main(void){
//	char ch[4];
//	int a[4];
//	printf("请输入四个数字字符：");
//	for(int i=0;i<4;i++) {
//		scanf("%c",&ch[i]);
//		if(ch[i]<'0'||ch[i]>'9')
//		{
//			printf("有非数字字符！");
//			break;
//		}
//		a[i]=ch[i];
//	}
//	for(int j=0;j<4;j++){
//		printf("%d\n",a[j]);
//	}
//	printf("你输入的数值+1后为%d\n",10000*a[0]+1000*a[1]+100*a[2]+10*a[3]+a[4]+1);
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
    printf("请输入四个数字字符：");
    for (a = 0; a < 4; a++)
    {
        A[a] = getchar();           //学到 
        if (A[a] > 57 || A[a] < 48)
        {
            printf("有非数字字符！");
            goto end;
        }
    }
    for (a = 0; a < 4; a++)
    {
        sum += (A[a] - 48) * pow(10, (3 - a)); //
    }
    printf("你输入的数值+1后为%d\n", sum + 1);
end:
    return 0;
}
