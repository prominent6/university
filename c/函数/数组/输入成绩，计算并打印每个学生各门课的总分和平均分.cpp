//������������ĳ�ʼ���峤��
//��һ�ָ�ֵ��ʽ������ܲ�����,�������ж�ȡ��ʽΪ������ȡ 
//�ڶ��ָ�ֵ��ʽ����������� 
 
#include  <stdio.h>
#define STUD 2         /* �����ܵ�ѧ������ */
#define COURSE 3            /* �����ܵĿ��Կ�Ŀ�� */
void  Total(int *pScore, int sum[], float aver[], int m, int n);
void  Print(int *pScore, int sum[], float aver[], int m, int n);
int main()
{
    int i, j, m, n, score[STUD][COURSE], sum[STUD];
    float aver[STUD];
    printf("How many students?");
    scanf("%d",&m);
    printf("How many courses?");
    scanf("%d",&n);
    printf("Input scores:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&score[i][j]);
        }
    }
    Total(*score, sum, aver, m, n);
    Print(*score, sum, aver, m, n);
    return 0;
}
void Total(int *pScore, int sum[], float aver[], int m, int n)
{
    int  i, j;
    for (i = 0; i < m; i++)
    {
        sum[i] = 0;
        for (j = 0; j < n; j++)
        {
            sum[i] += pScore[i * n + j];
        }
        aver[i] = (float) sum[i] / n;
    }
}
void  Print(int *pScore, int sum[], float aver[], int m, int n)
{
    int  i, j;
    printf("Result:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d\t", pScore[i * n + j]);
        }
        printf("%5d\t%6.1f\n", sum[i], aver[i]);
    }
}


//#include  <stdio.h>
//#define STUD   30       /* �����ܵ�ѧ������ */
//#define COURSE 5        /* �����ܵĿ��Կ�Ŀ�� */
//void  Input(int *pScore, int m, int n);
//void  Total(int *pScore, int sum[], float aver[], int m, int n);
//void  Print(int *pScore, int sum[], float aver[], int m, int n);
//int main()
//{               
//    int     m, n, score[STUD][COURSE], sum[STUD];
//    float   aver[STUD];
//    printf("How many students?");
//    scanf("%d", &m);
//    printf("How many courses?");
//    scanf("%d", &n);
//    Input(*score, m, n);
//    Total(*score, sum, aver, m, n);
//    Print(*score, sum, aver, m, n);
//    return 0;
//}               
///*�������ܣ���������m*n������������ʼ��ַΪpScore�������ڴ浥Ԫ�� */
//void  Input(int *pScore, int m, int n)
//{               
//    int   i, j;
//    printf("Input scores:\n");
//    for (i = 0; i < m; i++)
//    {               
//        for (j = 0; j < n; j++)
//        {               
//            scanf("%d", &pScore[i * n + j]);
//        }
//    }
//}               
///* �������ܣ�������ʼ��ַΪpScore�������ڴ��д洢��m*n������Ԫ��ֵ��ƽ��ֵ */
//void  Total(int *pScore, int sum[], float aver[], int m, int n)
//{               
//    int  i, j;
//    for (i = 0; i < m; i++)
//    {               
//        sum[i] = 0;
//        for (j = 0; j < n; j++)
//        {               
//            sum[i] = sum[i] + pScore[i * n + j];
//        }
//        aver[i] = (float) sum[i] / n;
//    }
//}               
///* �������ܣ���ӡ��ʼ��ַΪpScore�������ڴ浥Ԫ�д洢��m*n������Ԫ��ֵ */
//void  Print(int *pScore, int sum[], float aver[], int m, int n)
//{               
//    int  i, j;
//    printf("Result:\n");
//    for (i = 0; i < m; i++)
//    {               
//        for (j = 0; j < n; j++)
//        {               
//            printf("%4d\t", pScore[i * n + j]);
//        }
//        printf("%5d\t%6.1f\n", sum[i], aver[i]);
//    }
//}   
