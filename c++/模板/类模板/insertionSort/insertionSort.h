//���� 
#include <iostream>
using namespace std;
template <class T>
void insertionSort(T a[],int n){
	for(int i=1;i<n;i++){
		int j=i; //��һ����ͷ
		T temp=a[i]; //Ҫ���������бȽϵ�ֵ
		while(j>0&&temp<a[j-1]){
			//Ѱ�Ҳ���λ��
			a[j]=a[j-1];
			j--; 
		} 
		a[j]=temp; //����λ���ҵ������� 
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	} 
}
