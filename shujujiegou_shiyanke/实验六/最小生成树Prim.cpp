#include <stdio.h>
#include <stdlib.h>

#define MAX_INT 65535                     //����һ��������ֵ
#define MIN(x, y) ((x) > (y)) ? (y) : (x) //�Ƚϴ�С�ĺ궨��

#define MAX_N 1001

int n = 7, m = 11;
int v[MAX_N][MAX_N];                                  //�ڽӾ���
int sons[MAX_N][MAX_N];                               //��¼�ӽڵ���
int num_sons[MAX_N], num_endsons[MAX_N], deep[MAX_N]; //��¼ÿ���ڵ�Ķ�����Ŀ��ÿ���ڵ�ĩ�˶�����

int main(){
    //�±�1�ǵ�һ����
    printf("��������������\n");
    scanf("%d", &n);
    printf("������ߵ�������\n");
    scanf("%d", &m);
    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            if (i == j)
                v[i][j] = 0;
            else
                v[i][j] = MAX_INT; //��ʼ���ڽӾ�������·������Ϊ�����
        }
    }
    for (int i = 0; i < m; i++)
    { 
        int a, b, x;
        scanf("%d %d %d", &a, &b, &x);
        a++;
        b++;
        v[a][b] = v[b][a] = x;
    }
    //prim�㷨
    printf("·�����£�");
    int lowcost[MAX_N];
    int adjvex[MAX_N];
    adjvex[1] = 0;
    lowcost[1] = 0;
    for (int i = 2; i <= n; ++i)
    {
        lowcost[i] = v[1][i];
        adjvex[i] = 1;
    }
    for (int i = 0; i < MAX_N; i++)
    {
        num_sons[i] = 0; //��ʼ��������������
        num_endsons[i] = 0;
        deep[i] = 1;
    }
    int min, j, k;
    for (int i = 2; i <= n; i++)
    {                  //�Ӷ��ŵ㿪ʼ
        min = MAX_INT; //����Сֵ����Ϊ���
        j = 1;
        k = 1;
        //ѡ��Ȩֵ��С�ģ��洢��k��
        while (j <= n)
        {
            if (lowcost[j] != 0 && lowcost[j] < min)
            { // lowcost�е�0��ʾ�õ��Ѿ��ڼ��ϵ���
                min = lowcost[j];
                k = j;
            }
            j++;
        }
        printf("%d->%d  ", adjvex[k] - 1, k - 1); //��һ���㵽��һ���㣬k�ĸ�����adjvex[k]
        int f = adjvex[k];
        sons[f][num_sons[f]] = k;
        num_sons[f]++;
        lowcost[k] = 0; //����0�Ļ�������������Ѿ����������� �´�ȡȨֵ�������õ�����
        for (j = 1; j <= n; j++)
        { //����lowcost����
            if (lowcost[j] != 0 && v[k][j] < lowcost[j])
            {
                lowcost[j] = v[k][j];
                adjvex[j] = k; // j�ڵ��ǰ���ڵ�Ϊk
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (num_sons[i] == 0)
        {                      //�ýڵ���Ҷ�ӽڵ㣨���ӣ�
            int f = adjvex[i]; // idxָ��ֱϵ���ڵ�
            do
            {
                num_endsons[f]++;
                f = adjvex[f];
            } while (f != 0); //ֱ��׷�ݵ�0�����
        }
    }
    int p = 0, q = 1, last_deep = 0; //����ָ��,�ϴ������Ϣ
    int queue[MAX_N];
    queue[0] = 1;
    printf("\r\n��С���������£�");
    while (p != q)
    {
        int idx = queue[p]; //���׳���,idx�ǵ�ǰ�����Ľڵ��
        p++;                //����ָ��ǰ��
        if (deep[idx] > last_deep)
        {
            printf("\r\n");
            last_deep = deep[idx];
        }
        printf("%d ", idx - 1);
        for (int i = 0; i < num_sons[idx]; i++)
        {
            int s = sons[idx][i];
            queue[q++] = s;
            deep[s] = deep[idx] + 1;
        }
    }
	printf("\nѧ�ţ�2021211818 ��׿��");
    return 0;
}
