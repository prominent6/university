//���ʵ��ð��������int* bubble_sort(int n);
#include <iostream>
using namespace std;

int* bubble_sort(int n);/* �Գ���Ϊn������ִ��ð������ */

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
//��С��������
int* bubble_sort(int n){
	int *b=new int[n]; //ʹ�ö�̬�ڴ���䷽ʽ����һ����СΪn������
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

