#include  <iostream>
using  namespace  std;
template <typename T>
void  f(T  *x,  int  n)
{   
	for(int i=0;i<5;i++){
		for(int j=i;j<5;j++){
			if(x[j]>x[i]){
				T temp;
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
}
int  main()
{
	int  a[5]={34,78,11,96,88};
	f(a,  5)  ;
	for(int  i=0;i<5;i++)
		cout<<a[i]<<"\t";
	cout<<endl;
	return  0;
}
