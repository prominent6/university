#include <stdio.h>
#include <stdbool.h> 
#include <vector>
#include <algorithm>

using namespace std;

struct Node{
		int t,id;   //tΪÿ�˽�ˮʱ�䣬idΪÿ�˵�id 
	} N1={};
bool cmp(Node a,Node b) {
		return a.t <b.t;
	}
	
int main(void){
	
	
	int n;    //nΪ������ 
	scanf("%d",&n);

	vector<struct Node> a;
	
	sort(a.begin(),a.end(),cmp);
	double sum=0,tmp=0;
	printf("%d",a[0].id);

	for (int i=1;i<n;i++) {
		printf("%d",a[i].id);
		tmp+=a[i-1].t;
		sum+=tmp;
	}
	printf("\n%.2f",sum/n);
	
	return 0;
}
