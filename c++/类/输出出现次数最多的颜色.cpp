#include <iostream>
#include <map>
#define x first
#define y second
using namespace std;
int main() {
	map<string, int> m;
	int n;
	//���������ж��飬�����ļ�β
	while (cin>>n) {
		string s,p;
		int maxx = 0;
		while (n) {
			cin >> s;
			m[s]++;
			n--;
		}
		//�����"�����ֲ��е��������ֻ�����ASCII��ֵ��С��������ɫ��"������⣬��Ϊ��ѭ�����ǰ����ֵ����򣬽��ַ�����С������
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
