#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct{
	DataType list[MaxSize]={5,7,9,12,15,18,20,22,25,30,100};
	int size; 
} SeqList;
//斐波那契数列 
//又称黄金比例数列 1、1、2、3、5、8、13、21、34……，
//这个数列从第三项开始，每一项都等于前两项之和（F[K] = F[K-1] + F[K-2]）
//随着斐波那契数列的递增，前后两个数的比值会越来越接近0.618
//斐波那契查找是在二分查找的基础上根据斐波那契数列进行分割 
 
//斐波那契查找总共分为以下几步：
//1.构建斐波那契数列
//2.计算数组长度对应的斐波那契数列元素个数 
//（若均不对应，则选择 “第一个大于数组长度的斐波那契数值x”） while(R->size> F[k])
//k值为其下标 
//3.对数组进行填充,填满x个数 
//4.循环进行区间分割，查找中间值mid=Low + F[K-1]-1
//5.判断中间值和目标值的关系，确定更新策略
//1)目标值大于中间值
//新的查找范围在mid+1到第high个，此时范围个数为F[K-2]-1个，即数组右边的长度，所以要在[low,F[k-2]-1]范围查找；
//2)目标值小于中间值
//重新确定查找范围，新的查找范围是第low个到第mid-1个，此时范围个数为F[K-1]-1个，即数组左边的长度，所以要在[low,F[k-1]-1]范围查找

void fibonacci(int *f) //构建斐波那契序列
{
	f[0] = 1;
	f[1] = 1;
	for(int i = 2; i < MaxSize; ++i) f[i] = f[i - 2] + f[i - 1];
}

int fibonacci_search(SeqList *R,DataType key)
{
	int low = 0,high =R->size - 1;
	int mid = 0;
	int k = 0;  
	int F[MaxSize]; //斐波那契序列
	fibonacci(F);
	while(R->size> F[k]) //得k 
	{
		++k;
	}
	for(int i = R->size ; i < F[k]; ++i) //把数组补全，使用R.list[n-1] 
	R->list[i] = R->list[high];
	
	while(low <= high){
		mid = low + F[k-1] - 1; //根据斐波那契数列进行黄金分割
		if(R->list[mid] > key){
			high = mid - 1;
			k = k - 1;
		}else if(R->list[mid] < key){
			low = mid + 1;
			k = k - 2;
		}else{
			if(mid <= high) //如果为真则找到相应的位置
			return mid;
			else return -1;
		}
	}
	return -1;
}
int main(){
	SeqList myList;
	myList.size=11; 
	int res1=fibonacci_search(&myList,12),res2=fibonacci_search(&myList,28);
	if(res1==-1) printf("12:not found!\n");
	else printf("%d:%d\n",12,res1);
	if(res2==-1) printf("28:not found!\n");
	else printf("%d:%d\n",28,res2);
	return 0;
} 
