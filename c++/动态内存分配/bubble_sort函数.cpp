//编程实现冒泡排序函数int* bubble_sort(int n);
#include <iostream>
using namespace std;

int* bubble_sort(int n);/* 对长度为n的数组执行冒泡排序 */

int main()
{
    int n;
    cin >> n;
    int* a = bubble_sort(n);
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1)cout << " ";
    }
    cout << endl;
    return 0;
}
//从小到大排列
int* bubble_sort(int n){
	int *b=new int[n]; //使用动态内存分配方式分配一个大小为n的数组
	int temp;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(b[j+1]<b[j]){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	return b;
}

