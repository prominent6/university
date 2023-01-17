//升序 
#include <iostream>
using namespace std;
template <class T>
void insertionSort(T a[],int n){
	for(int i=1;i<n;i++){
		int j=i; //另一个箭头
		T temp=a[i]; //要与已排序列比较的值
		while(j>0&&temp<a[j-1]){
			//寻找插入位置
			a[j]=a[j-1];
			j--; 
		} 
		a[j]=temp; //插入位置找到，插入 
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	} 
}
