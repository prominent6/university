//求数组中最大值对应下标
 
//查找不同分数段的人数
int Between(int a[],int n,int low,int high)
{
	int i,num=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>=low&&a[i]<=high) num++;
		return num;
	}
}

//求中位数
int Median(int a[],int n)
{
	if(n%2==0) return (a[n/2]+a[n/2-1])/2;
	else return a[n/2];
 } 
 //求众数
 int Most(int a[],int n)
 {
 	int i,grade,max=0,most=0,count[n]={0};
 	for(i=0;i<n;i++) //求每个数组元素出现的次数 
 	{
 		count[i]=Between(a,n,a[i],a[i]); 
	 }
	 most= a[Max_i(count,N)];
  } 
