//�����������ֵ��Ӧ�±�
 
//���Ҳ�ͬ�����ε�����
int Between(int a[],int n,int low,int high)
{
	int i,num=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>=low&&a[i]<=high) num++;
		return num;
	}
}

//����λ��
int Median(int a[],int n)
{
	if(n%2==0) return (a[n/2]+a[n/2-1])/2;
	else return a[n/2];
 } 
 //������
 int Most(int a[],int n)
 {
 	int i,grade,max=0,most=0,count[n]={0};
 	for(i=0;i<n;i++) //��ÿ������Ԫ�س��ֵĴ��� 
 	{
 		count[i]=Between(a,n,a[i],a[i]); 
	 }
	 most= a[Max_i(count,N)];
  } 
