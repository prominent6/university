#include <stdio.h>
const int INF=0x3f3f3f3f,MAXN=1000; 
int n,m,res,num; //������n�ͱ���m res���ս�� 
struct dist{
	int u; //��� 
	int len;
} dist[MAXN];
//int ; //�洢�����㵽����U�ľ��� ����U�洢�Ѽӹ��Ķ���
bool book[MAXN]; //��¼ĳ�������Ƿ���뵽����U�� 
int g[MAXN][MAXN]; //�洢���� 
struct bian{
	int start;
	int end;
} bian[MAXN];
void Prim(){ 
	dist[1].len=0;  //��1���뼯��U
	book[1]=true;
	for(int i=2;i<=n;i++){
		if(g[1][i]<dist[i].len){
			dist[i].len=g[1][i];  //����dist 
			dist[i].u=1; 
		}
	} 
	bian[++num].start=1;
	for(int i=2;i<=n;i++){
		int temp=INF;
		int t=-1,t2=-1;
		for(int j=2;j<=n;j++){ //���� 
			if(!book[j]&&dist[j].len<temp){
				temp=dist[j].len; //Ҫһ���������Сֵ 
				t=j;
//				t2=dist[j].u;
			}
		} 
		bian[num].end=t;
		
		book[t]=true;
		res+=dist[t].len;
		for(int k = 2 ; k <= n ; k++){
			if(g[t][k]<dist[k].len){
				dist[k].len=g[1][k];  //����dist 
				dist[k].u=t; 
			}
		}
		temp=INF;
		for(int j=2;j<=n;j++){ //���� 
			if(!book[j]&&dist[j].len<temp){
				temp=dist[j].len; //Ҫһ���������Сֵ 
				t2=dist[j].u;
			}
		} 
		bian[++num].start=t2;
	}
} 
int main(){
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			g[i][j]=INF; //��ʼ��������������֮��ľ���Ϊ������ 
		}
		dist[i].len=INF; //��ʼ�����ж��㵽����U�ľ��붼�������� 
	}
	//��ʼ�������� 
	for(int i=1;i<=m;i++){
		int u,v,w;
		scanf("%d %d %d",&u,&v,&w);
		g[u][v]=g[v][u]=w; 
	} 
	Prim();
	for(int i=1;i<=n;i++){
		printf("(%d->%d) ",bian[i].start ,bian[i].end);
	}
	printf("\n%d",res); 
	return 0;
}

