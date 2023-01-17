#include <stdio.h>
#define MAXSIZE 100
typedef struct student{
	char name[8];
	int score;
} stu;

//直接插入排序1
//每一步将一个待排序元素插入到已排序序列的适当位置上，直到待排序元素插入完为止 
//void InsertSort(stu *s,int n){
//	stu temp;
//	int i,j;
//	for(i=2;i<=n;i++)  
//    {  
//        temp=s[i];  
//        j=i-1;  
//        while(j>=1 && temp.score> s[j].score)  
//        {  
//            s[j+1]=s[j];  
//            j--;  
//        }  
//        j+=1;  
//        s[j]=temp;  
//    }  
//} 

//直接插入排序2
//void InsertSort(stu *s,int n){
//	int j;
//	for(int i=2;i<=n;i++){
//		if(s[i].score>s[i-1].score){
//			s[0]=s[i]; //将待插入记录存放在监视哨中
//			s[i]=s[i-1];
//			for(j=i-2;s[0].score>s[j].score;--j){
//				s[j+1]=s[j];
//			}
//			s[j+1]=s[0];
//		} 
//	}
//}

//希尔排序
void ShellInsert(stu *s,int dk,int n){
	int j;
	for(int i=1+dk;i<=n;++i){
		if(s[i].score>s[i-1].score){
			s[0]=s[i];
			s[i]=s[i-1];
			for(j=i-dk;j>0&&s[0].score>s[j].score;j-=dk){
				s[j+dk]=s[j];
			} 
			s[j+dk]=s[0]; 
		}
	} 
}
void ShellSort(stu *s,int dt[],int t,int n){
	for(int k=0;k<t;k++){
		ShellInsert(s,dt[k],n);
	}
}
////快速排序
//int Partition(stu *s,int low,int high){
//	int pivotKey=s[low].score;
//	stu temp;
//	while(low<high){
//		while(low<high&&s[high].score<=pivotKey) --high;
//		temp=s[low];
//		s[low]=s[high];
//		s[high]=temp;
//		while(low<high&&s[low].score>=pivotKey) ++low;
//		temp=s[low];
//		s[low]=s[high];
//		s[high]=temp;
//	}
//	return low;
//} 
//void QuickSort(stu *s,int low,int high){
//	if(low<high){
//		int pivotloc=Partition(s,low,high);
//		QuickSort(s,low,pivotloc-1); //对低端子表递归调用本函数 
//		QuickSort(s,pivotloc+1,high); //对高端子表递归调用本函数 
//	}
//}


int main(){
	stu s[MAXSIZE];
	int n,rank=0;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++) scanf("%s %d",s[i].name,&s[i].score);
//	InsertSort(s,n);
//	printf("InsertSort result: \n");
//	for(int i=1;i<=n;i++){
//		if(s[i].score==s[i-1].score) printf("%d %s %d\n",rank,s[i].name,s[i].score);
//		else printf("%d %s %d\n",++rank,s[i].name,s[i].score);
//	}

//	rank=0;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++) scanf("%s %d",s[i].name,&s[i].score);
//	QuickSort(s,1,n);
//	printf("QuickSort result: \n");
//	for(int i=1;i<=n;i++){
//		if(s[i].score==s[i-1].score) printf("%d %s %d\n",rank,s[i].name,s[i].score);
//		else printf("%d %s %d\n",++rank,s[i].name,s[i].score);
//	}
	
	int dt[3]={5,3,1};
	int t=3;
	rank=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%s %d",s[i].name,&s[i].score);
	ShellSort(s,dt,t,n);
	printf("ShellSort result: \n");
	for(int i=1;i<=n;i++){
		if(s[i].score==s[i-1].score) printf("%d %s %d\n",rank,s[i].name,s[i].score);
		else printf("%d %s %d\n",++rank,s[i].name,s[i].score);
	}
	
	return 0;
} 

