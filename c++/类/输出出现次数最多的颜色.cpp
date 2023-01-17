#include <iostream>
#include <map>
#define x first
#define y second
using namespace std;
int main() {
	map<string, int> m;
	int n;
	//测试数据有多组，处理到文件尾
	while (cin>>n) {
		string s,p;
		int maxx = 0;
		while (n) {
			cin >> s;
			m[s]++;
			n--;
		}
		//解决了"若出现并列的情况，则只需输出ASCII码值最小的那种颜色。"这个问题，因为该循环就是按照字典排序，将字符串从小到大排
		map<string, int>::iterator it;
		for (it = m.begin(); it != m.end(); it++) {
			if (it->y > maxx) {
				maxx = it->y;
				p = it->x;
			}
		}
		cout << p << endl;
		m.clear();
	}
	return 0;
}
