#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
using namespace std;
int main(void) {
	long long v[100010];
	long long n,len=0;
	string str;
	getline(cin,str);
	int i = 0;
	while (str[i]!=' ') {
		if (str[i] != ',') {
			v[len++] = str[i] - '0';
		}
		i++;
	}
	n = str[i+1] - '0';
	for (int j = 0; j < len; j++) {
		int k = n - v[j];
		for (int m = 0; m < len; m++) {
			if (v[m] == k) {
				cout << j << "," << m << endl;
				return 0;
			}
		}
	}
	
}
