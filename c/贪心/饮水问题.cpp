#include <stdio.h>
#include <stdbool.h> 
#include <vector>
#include <algorithm>

using namespace std;

struct Node{
		int t,id;   //t为每人节水时间，id为每人的id 
	} N1={};
bool cmp(Node a,Node b) {
		return a.t <b.t;
	}
	
int main(void){
	
	
	int n;    //n为人总数 
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
