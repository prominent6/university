//图G中距离顶点v的最短路径长度最大的一个顶点m 
// 利用Dijkstra算法求v0到其它所有顶点的最短路径，
//分别保存在数组D[i]中，
//然后求出D[i]中值最大的数组下标m即可。
int ShortestPath_MAX(AMGraph G, int v0){
    n=G.vexnum;                    		//G中顶点的个数 
    for(v = 0; v<n; ++v){             	//n个顶点初始化 
       S[v] = false;                  	//S初始为空集 
       D[v] = G.arcs[v0][v];           	//将v0到各个终点的最短路径长度初始化 
       if(D[v]< MaxInt)  Path [v]=v0; 	//如果v0和v之间有弧，则将v的前驱置为v0 
       else Path [v]=-1;              	//如果v0和v之间无弧，则将v的前驱置为-1 
      }
      S[v0]=true;                    		//将v0加入S 
      D[v0]=0;                      		//源点到源点的距离为0 
      /*开始主循环，每次求得v0到某个顶点v的最短路径，将v加到S集*/ 
      for(i=1;i<n; ++i){               
        min= MaxInt; 
        for(w=0;w<n; ++w) 
          if(!S[w]&&D[w]<min)  
              {v=w; min=D[w];}         	//选择一条当前的最短路径，终点为v 
        S[v]=true;                   		//将v加入S 
        for(w=0;w<n; ++w)      		//更新最短路径长度 
        if(!S[w]&&(D[v]+G.arcs[v][w]<D[w])){ 
             D[w]=D[v]+G.arcs[v][w];   	//更新D[w] 
             Path [w]=v;              		//更改w的前驱为v 
        }//if 
    }//for
/*最短路径求解完毕，设距离顶点v0的最短路径长度最大的一个顶点为m */       
Max=D[0];
m=0;
for(i=1;i<n;i++)
	if(Max<D[i]) m=i;		
return m;
} 

