#include <stdio.h>
const int INF=0x3f3f3f3f,MAXN=1000; 
int n,m,res,num; //定点数n和边数m res最终结果 
struct dist{
	int u; //起点 
	int len;
} dist[MAXN];
//int ; //存储各顶点到集合U的距离 集合U存储已加过的顶点
bool book[MAXN]; //记录某个顶点是否加入到集合U中 
int g[MAXN][MAXN]; //存储这网 
struct bian{
	int start;
	int end;
} bian[MAXN];
void Prim(){ 
	dist[1].len=0;  //点1加入集合U
	book[1]=true;
	for(int i=2;i<=n;i++){
		if(g[1][i]<dist[i].len){
			dist[i].len=g[1][i];  //更新dist 
			dist[i].u=1; 
		}
	} 
	bian[++num].start=1;
	for(int i=2;i<=n;i++){
		int temp=INF;
		int t=-1,t2=-1;
		for(int j=2;j<=n;j++){ //更新 
			if(!book[j]&&dist[j].len<temp){
				temp=dist[j].len; //要一个距离的最小值 
				t=j;
//				t2=dist[j].u;
			}
		} 
		bian[num].end=t;
		
		book[t]=true;
		res+=dist[t].len;
		for(int k = 2 ; k <= n ; k++){
			if(g[t][k]<dist[k].len){
				dist[k].len=g[1][k];  //更新dist 
				dist[k].u=t; 
			}
		}
		temp=INF;
		for(int j=2;j<=n;j++){ //更新 
			if(!book[j]&&dist[j].len<temp){
				temp=dist[j].len; //要一个距离的最小值 
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
			g[i][j]=INF; //初始化任意两个顶点之间的距离为正无穷 
		}
		dist[i].len=INF; //初始化所有顶点到集合U的距离都是正无穷 
	}
	//初始化无向网 
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

