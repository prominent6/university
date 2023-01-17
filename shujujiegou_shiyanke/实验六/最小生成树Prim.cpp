#include <stdio.h>
#include <stdlib.h>

#define MAX_INT 65535                     //定义一个无穷大的值
#define MIN(x, y) ((x) > (y)) ? (y) : (x) //比较大小的宏定义

#define MAX_N 1001

int n = 7, m = 11;
int v[MAX_N][MAX_N];                                  //邻接矩阵
int sons[MAX_N][MAX_N];                               //记录子节点编号
int num_sons[MAX_N], num_endsons[MAX_N], deep[MAX_N]; //记录每个节点的儿子数目，每个节点末端儿子数

int main(){
    //下标1是第一个点
    printf("请输入点的数量：\n");
    scanf("%d", &n);
    printf("请输入边的数量：\n");
    scanf("%d", &m);
    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            if (i == j)
                v[i][j] = 0;
            else
                v[i][j] = MAX_INT; //初始化邻接矩阵，所有路径都设为无穷大
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
    //prim算法
    printf("路径如下：");
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
        num_sons[i] = 0; //初始化儿子数量数组
        num_endsons[i] = 0;
        deep[i] = 1;
    }
    int min, j, k;
    for (int i = 2; i <= n; i++)
    {                  //从二号点开始
        min = MAX_INT; //将最小值先设为最大
        j = 1;
        k = 1;
        //选出权值最小的，存储在k中
        while (j <= n)
        {
            if (lowcost[j] != 0 && lowcost[j] < min)
            { // lowcost中的0表示该点已经在集合当中
                min = lowcost[j];
                k = j;
            }
            j++;
        }
        printf("%d->%d  ", adjvex[k] - 1, k - 1); //从一个点到另一个点，k的父亲是adjvex[k]
        int f = adjvex[k];
        sons[f][num_sons[f]] = k;
        num_sons[f]++;
        lowcost[k] = 0; //等于0的话代表这个顶点已经加入生成树 下次取权值不会在用到它。
        for (j = 1; j <= n; j++)
        { //更新lowcost数组
            if (lowcost[j] != 0 && v[k][j] < lowcost[j])
            {
                lowcost[j] = v[k][j];
                adjvex[j] = k; // j节点的前述节点为k
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (num_sons[i] == 0)
        {                      //该节点是叶子节点（儿子）
            int f = adjvex[i]; // idx指向直系祖宗点
            do
            {
                num_endsons[f]++;
                f = adjvex[f];
            } while (f != 0); //直到追溯到0点结束
        }
    }
    int p = 0, q = 1, last_deep = 0; //队列指针,上次深度信息
    int queue[MAX_N];
    queue[0] = 1;
    printf("\r\n最小生成树如下：");
    while (p != q)
    {
        int idx = queue[p]; //队首出队,idx是当前操作的节点号
        p++;                //队首指针前移
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
	printf("\n学号：2021211818 苏卓萱");
    return 0;
}
