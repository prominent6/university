//#include <stdio.h>
//struct num{
//	int flag;
//	int mark; //�Ƿ��˳� 1��ʾû�� 
//};
//int main(void){
//	struct num arr[13]={
//		1,1,2,1,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1 
//	};
//	int i,j;
//	printf("\n��Ȧ��Ա��˳��");
//	for(i=0;i<13;i++){
//		if((arr[i].flag)%3==0){
//			printf("%3d",arr[i].flag);
//			arr[i].mark=0; 
//		}
//	}
//	printf("\n���ĳ�Ա�ǣ�");
//	for(i=0;i<13;i++){
//		if(arr[i].mark==1) printf("%3d",arr[i].flag);
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//#define N 13
// 
//struct person
//{
//    int number;
//    int nextp;
//} link[N + 1];
// 
//int main(void)
//{
//    int i, count, h;
// 
//    /* �������� */
//    for (i = 1; i <= N; i++)
//    {
//        if (i == N)
//        {
//            link[i].nextp = 1;
//        }
//        else
//        {
//            link[i].nextp = i + 1;
//        }
//        link[i].number = i;
//    }
//    printf("\n");
//    count = 0;
//    h = N;
//    printf("��Ȧ��Ա��˳��");
//    while (count < N - 1)
//    {
//        i = 0;
//        while (i != 3)
//        {
//            h = link[h].nextp;
//            if (link[h].number)
//            {
//                i++;
//            }
//        }
//        printf("%3d", link[h].number);
//        link[h].number = 0;
//        count++;
//    }
// 
//    printf("\n���ĳ�Ա�ǣ�");
//    for (i = 1; i <= N; i++)
//    {
//        if (link[i].number)
//        {
//            printf("%3d", link[i].number);
//        }
//    }
// 
//    return 0;
//}

#include <stdio.h>
#define N 13
 
struct person
{
    int number;
    int nextp;
} link[N + 1];
 
int main(void)
{
    int i, count, h;
    int n,m;
    scanf("%d %d",&n,&m);
    /* �������� */
    for (i = 1; i <= n; i++)
    {
        if (i == n)
        {
            link[i].nextp = 1;
        }
        else
        {
            link[i].nextp = i + 1;
        }
        link[i].number = i;
    }
//    printf("\n");
    count = 0;
    h = n;
    while (count < n - 1)
    {
        i = 0;
        while (i != m)
        {
            h = link[h].nextp;
            if (link[h].number)
            {
                i++;
            }
        }
        // printf("%3d", link[h].number);
        link[h].number = 0;
        count++;
    }
 
    // printf("\n���ĳ�Ա�ǣ�");
    for (i = 1; i <= n; i++)
    {
        if (link[i].number)
        {
            printf("%d\n", link[i].number);
        }
    }
 
    return 0;
}
