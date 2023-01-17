#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct{
	DataType list[MaxSize]={5,7,9,12,15,18,20,22,25,30,100};
	int size; 
} SeqList;
//쳲��������� 
//�ֳƻƽ�������� 1��1��2��3��5��8��13��21��34������
//������дӵ����ʼ��ÿһ�����ǰ����֮�ͣ�F[K] = F[K-1] + F[K-2]��
//����쳲��������еĵ�����ǰ���������ı�ֵ��Խ��Խ�ӽ�0.618
//쳲������������ڶ��ֲ��ҵĻ����ϸ���쳲��������н��зָ� 
 
//쳲����������ܹ���Ϊ���¼�����
//1.����쳲���������
//2.�������鳤�ȶ�Ӧ��쳲���������Ԫ�ظ��� 
//����������Ӧ����ѡ�� ����һ���������鳤�ȵ�쳲�������ֵx���� while(R->size> F[k])
//kֵΪ���±� 
//3.������������,����x���� 
//4.ѭ����������ָ�����м�ֵmid=Low + F[K-1]-1
//5.�ж��м�ֵ��Ŀ��ֵ�Ĺ�ϵ��ȷ�����²���
//1)Ŀ��ֵ�����м�ֵ
//�µĲ��ҷ�Χ��mid+1����high������ʱ��Χ����ΪF[K-2]-1�����������ұߵĳ��ȣ�����Ҫ��[low,F[k-2]-1]��Χ���ң�
//2)Ŀ��ֵС���м�ֵ
//����ȷ�����ҷ�Χ���µĲ��ҷ�Χ�ǵ�low������mid-1������ʱ��Χ����ΪF[K-1]-1������������ߵĳ��ȣ�����Ҫ��[low,F[k-1]-1]��Χ����

void fibonacci(int *f) //����쳲���������
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
	int F[MaxSize]; //쳲���������
	fibonacci(F);
	while(R->size> F[k]) //��k 
	{
		++k;
	}
	for(int i = R->size ; i < F[k]; ++i) //�����鲹ȫ��ʹ��R.list[n-1] 
	R->list[i] = R->list[high];
	
	while(low <= high){
		mid = low + F[k-1] - 1; //����쳲��������н��лƽ�ָ�
		if(R->list[mid] > key){
			high = mid - 1;
			k = k - 1;
		}else if(R->list[mid] < key){
			low = mid + 1;
			k = k - 2;
		}else{
			if(mid <= high) //���Ϊ�����ҵ���Ӧ��λ��
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
