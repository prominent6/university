#include <stdio.h>
#include <math.h>
void CountAthleteScore(int sh[],int n,float sf[], float f[], int m);
void Sort(int sh[], float a[], int n);
void Print(int sh[], float a[], int n);
void CountJudgeScore(int ph[], float pf[], int m, float sf[], float f[],  int n);

float Max(float a[],int n);
float Min(float a[],int n);
int main(void)
{
	int m,n;
	printf("How many Athletes?");
	scanf("%d",&n);
	int sh[n];
	float sf[n];
	float f[n];
	printf("How many judges?");
	scanf("%d",&m);
	int ph[m]={0};
	float pf[m];
	printf("Scores of Athletes:\n");
	CountAthleteScore(sh,n,sf,f,m);
	Sort(sh, f,n);
	printf("Order of Athletes:\n");
	Print(sh,f,n);
	CountJudgeScore(ph,pf,m,sf,f,n);
	Sort(ph,pf,n);
	printf("Order of judges:\n");
	Print(ph,pf,n);
}

/* 函数功能：统计参赛选手的得分 */ 
void CountAthleteScore(int sh[],int n,float sf[],float f[],int m)
//sh是编号 sf是分数 f是最终分数  
{
	
	for(int i=0;i<n;i++)
	{
		float sum=0.000;
		printf("\nAthlete %d is playing.", i+1);
	    printf("\nPlease enter his number code:");
	    scanf("%d",&sh[i]);       //录入code 
	    
		for (int j = 0; j < m; j++)    //录入分数 并求和 
	    {
		printf("Judge %d gives score:", j+1);
		scanf("%f", &sf[j]);     
		sum+=sf[j];                      
		}
		
		printf("Delete a maximum score:%.1f\n", Max(sf,n));
	    printf("Delete a minimum score:%.1f\n", Min(sf,n));
		f[i]=(sum-Max(sf,n)-Min(sf,n))/(float)(m-2);
	    printf("The final score of Athlete %d is %.3f\n",sh[i],f[i]);
    }
}
/* 函数功能：对分数从高到低排序 */
void Sort(int sh[], float a[], int n)
{
	int temp;
	float x,y;
	for(int i=0;i<=n-2;i++)
	{
		temp=i;
		for(int j=i+1;j<=n-1;j++)
		if(a[j]>a[temp]) temp=j;
		
		if(temp!=i)
		{
			x=a[temp];
			y=sh[temp];
		    a[temp]=a[i];
		    sh[temp]=sh[i];
		    a[i]=x;
		    sh[i]=y;
		}
		
	}
}

/* 函数功能：打印名次表 */
void Print(int sh[], float a[], int n)
{
	printf("order\tfinal score\tnumber code\n");
	for(int i=0;i<n;i++)
	{
		printf("%5d\t%11.3f\t%6d\n", i+1, a[i], sh[i]);
	}
}

/* 函数功能：统计评委的得分 */
void CountJudgeScore(int ph[], float pf[], int m, float sf[], float f[],  int n)
{
	for(int i=0;i<m;i++)
	{
		ph[i]=i+1;
		for(int j=0;j<n;j++)
		{
			pf[i]+=10-pow((sf[i]-f[i]),2);
		}
		
	}
}

/*求最大值*/ 
float Max(float a[],int n)
{   
    float m=a[0];
    for(int i=0;i<n;i++)
    if(m<a[i]) m=a[i];
	return m;
}
float Min(float a[],int n)
{
	float m=a[0];
	for(int i=0;i<n;i++)
    if(m>a[i]) m=a[i];
	return m;
}









//#include <stdio.h>
//#include <math.h>
//
//void  CountAthleteScore(int sh[], float sf[], int n, float f[][10], int m); /* 函数功能：统计参赛选手的得分 */
//void Sort(int h[], float f[], int n); /* 函数功能：对分数从高到低排序 */
//void Print(int h[], float f[], int n); /* 函数功能：打印名次表 */
//void CountJudgeScore(int ph[], float pf[], int m, float sf[], float f[][10],  int n); /* 函数功能：统计评委的得分 */
//
//int main()
//{
//    int n,m,sh[10],ph[10];                          //sh[]选手编号,ph[]评委编号
//    float sf[10],f[10][10],pf[10];                            //f[]每个评委给选手打分，sf[]每个选手最终得分,pf[]评委得分
//    printf("How many Athletes?");
//    scanf("%d", &n);                                /* 输入选手人数 */
//    printf("How many judges?");
//    scanf("%d", &m);                              /* 输入评委人数 */
//    printf("Scores of Athletes:\n");
//    CountAthleteScore(sh,sf,n,f,m);
//    CountJudgeScore(ph,pf,m,sf,f,n);
//    Sort(sh,sf,n);                                 //选手成绩排序
//    printf("Order of Athletes:\n");          /* 选手得分排序 */
//    Print(sh,sf,n);                                //选手排名打印
//    printf("Order of judges:\n");            /* 评委得分排序 */
//    Sort(ph,pf,m);
//    Print(ph,pf,m);
//    printf("Over!Thank you!");
//    return 0;
//}
//
//void  CountAthleteScore(int sh[], float sf[], int n, float f[][10], int m)
//{
//    int i,j,k,g,t,w,e;
//    float s,max,min;
//    for(i=0;i<n;i++)
//    {
//        printf("\nAthlete %d is playing.", i+1);
//        printf("\nPlease enter his number code:");
//        scanf("%d", &sh[i]);
//        for (j = 0; j < m; j++)              //录入成绩
//        {
//            printf("Judge %d gives score:", j+1);
//            scanf("%f",&f[i][j]);
//            getchar();
//        }
//        max=f[i][0];
//        w=0;
//        for(g=1;g<m;g++)
//        {
//            if(max<f[i][g])
//            {
//                max=f[i][g];
//                w=g;//记录最高分标号
//            }
//        }
//        min=f[i][0];
//        e=0;
//        for(t=1;t<m;t++)
//        {
//            if(min>f[i][t])
//            {
//                min=f[i][t];
//                e=t;//记录最低分标号
//            }
//        }
//        printf("Delete a maximum score:%.1f\n", max);
//        printf("Delete a minimum score:%.1f\n", min);    /*去掉一个最高分和最低分*/
//        s=0;
//        for(k=0;k<m;k++)          //计算最终得分
//        {
//            if(k!=w&&k!=e)
//                s+=f[i][k];
//        }
//        sf[i]=s/(m-2);
//        printf("The final score of Athlete %d is %.3f\n",sh[i],sf[i]);
//    }
//}
//
//void Sort(int h[], float f[], int n)
//{
//    int i,j;
//    float t;
//    for(i=0;i<n-1;i++)
//    {
//        for(j=i+1;j<n;j++)
//        {
//            if(f[i]<f[j])
//            {
//                t=f[i];
//                f[i]=f[j];      //交换成绩
//                f[j]=t;
//                t=h[i];
//                h[i]=h[j];      //交换编号
//                h[j]=t;
//            }
//        }
//    }
//}
//
//void Print(int h[], float f[], int n)
//{
//    int i;
//    printf("order\tfinal score\tnumber code\n");
//    for(i=0;i<n;i++)
//    {
//        printf("%5d\t%11.3f\t%6d\n", i+1, f[i], h[i]);
//    }
//}
//
//void CountJudgeScore(int ph[], float pf[], int m, float sf[], float f[][10],  int n)
//{
//    int i,j;
//    float s,t;
//    for(i=0;i<m;i++)
//    {
//        s=0;
//        for(j=0;j<n;j++)
//        {
//            t=(f[j][i]-sf[j])*(f[j][i]-sf[j]);
//            s+=t;
//        }
//        pf[i]=10-s;
//        ph[i]=i+1;
//    }
//}
//
//

