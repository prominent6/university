 #include <stdio.h>

void fun(int a[],int n); 
int main(void)
{
	int a[5]={2,6,5,8,3};
	fun(a,5);    
	for(int i=0;i<=4;i++)
	{
	printf("%d",a[i]);
	}                          
	return 0;
}

void fun(int a[],int n)
{
	int t,j,i,k;
	for(i=0;i<n-1;i++){                     
		k=i;
		for(j=i+1;j<=n-1;j++)
			if(a[j]<a[k]) k=j;             
		
		if(k!=i)
		{
			t=a[i];
			a[i]=a[k];
		    a[k]=t;
		
		} 
	} 

}

