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

/* �������ܣ�ͳ�Ʋ���ѡ�ֵĵ÷� */ 
void CountAthleteScore(int sh[],int n,float sf[],float f[],int m)
//sh�Ǳ�� sf�Ƿ��� f�����շ���  
{
	
	for(int i=0;i<n;i++)
	{
		float sum=0.000;
		printf("\nAthlete %d is playing.", i+1);
	    printf("\nPlease enter his number code:");
	    scanf("%d",&sh[i]);       //¼��code 
	    
		for (int j = 0; j < m; j++)    //¼����� ����� 
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
/* �������ܣ��Է����Ӹߵ������� */
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

/* �������ܣ���ӡ���α� */
void Print(int sh[], float a[], int n)
{
	printf("order\tfinal score\tnumber code\n");
	for(int i=0;i<n;i++)
	{
		printf("%5d\t%11.3f\t%6d\n", i+1, a[i], sh[i]);
	}
}

/* �������ܣ�ͳ����ί�ĵ÷� */
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

/*�����ֵ*/ 
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
//void  CountAthleteScore(int sh[], float sf[], int n, float f[][10], int m); /* �������ܣ�ͳ�Ʋ���ѡ�ֵĵ÷� */
//void Sort(int h[], float f[], int n); /* �������ܣ��Է����Ӹߵ������� */
//void Print(int h[], float f[], int n); /* �������ܣ���ӡ���α� */
//void CountJudgeScore(int ph[], float pf[], int m, float sf[], float f[][10],  int n); /* �������ܣ�ͳ����ί�ĵ÷� */
//
//int main()
//{
//    int n,m,sh[10],ph[10];                          //sh[]ѡ�ֱ��,ph[]��ί���
//    float sf[10],f[10][10],pf[10];                            //f[]ÿ����ί��ѡ�ִ�֣�sf[]ÿ��ѡ�����յ÷�,pf[]��ί�÷�
//    printf("How many Athletes?");
//    scanf("%d", &n);                                /* ����ѡ������ */
//    printf("How many judges?");
//    scanf("%d", &m);                              /* ������ί���� */
//    printf("Scores of Athletes:\n");
//    CountAthleteScore(sh,sf,n,f,m);
//    CountJudgeScore(ph,pf,m,sf,f,n);
//    Sort(sh,sf,n);                                 //ѡ�ֳɼ�����
//    printf("Order of Athletes:\n");          /* ѡ�ֵ÷����� */
//    Print(sh,sf,n);                                //ѡ��������ӡ
//    printf("Order of judges:\n");            /* ��ί�÷����� */
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
//        for (j = 0; j < m; j++)              //¼��ɼ�
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
//                w=g;//��¼��߷ֱ��
//            }
//        }
//        min=f[i][0];
//        e=0;
//        for(t=1;t<m;t++)
//        {
//            if(min>f[i][t])
//            {
//                min=f[i][t];
//                e=t;//��¼��ͷֱ��
//            }
//        }
//        printf("Delete a maximum score:%.1f\n", max);
//        printf("Delete a minimum score:%.1f\n", min);    /*ȥ��һ����߷ֺ���ͷ�*/
//        s=0;
//        for(k=0;k<m;k++)          //�������յ÷�
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
//                f[i]=f[j];      //�����ɼ�
//                f[j]=t;
//                t=h[i];
//                h[i]=h[j];      //�������
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

