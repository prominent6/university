#include <iostream>
#include <malloc.h>
using namespace std;
typedef struct String {
	char* data;
	int len;
} String;
String* initString() {
	String* s = (String*)malloc(sizeof(String));
	if (s) {
		s->data = NULL;
		s->len = 0;
	}
	return s;
}
void stringAssign(String* s,const char* data) {
	if (s->data) {
		free(s->data);
	}
	int len = 0;
	const char* temp = data;
	while (*temp) {
		len++;
		temp++;
	}
	if (len == 0) {
		s->data = NULL;
		s->len = 0;
	}
	else {
		temp = data;
		s->len = len;
		s->data = (char*)malloc(sizeof(char) * (len + 1)); //
		for (int i = 0; i < len; i++, temp++) {
			if (s->data) {
				s->data[i] = *temp;  //
			}
		}
	}
}
void printString(String* s) {
	for (int i = 0; i < s->len; i++) {
		if (i == 0) cout << s->data[i] << " ";
		else cout << "-> " << s->data[i] << " ";
	}
	cout << endl;
}
void forceMatch(String* master, String* sub) {
	int i = 0;
	int j = 0;
	while (i < master->len && j < sub->len) {
		if (master->data[i] == sub->data[j]) { //匹配则后移 
			i++;
			j++;
		}
		else {  //不匹配则回溯 
			i = i - j + 1;  //
			j = 0;
		}
	}
	//匹配成功的标志 肯定是跳出循环时，模式串满足... 
	if (j == sub->len) {
		cout << "yes!" << endl;
	}
	else cout << "no!" << endl;
}

int main() {
	String* s = initString();
	String* s1 = initString();
	stringAssign(s, "hello");
	stringAssign(s1, "hell");
	printString(s);
	forceMatch(s, s1);
	return 0;
}

//int main(int argc, char* argv[]) {
//	String* s = initString();
//	String* s1 = initString();
//	stringAssign(s, argv[1]);
//	stringAssign(s1, argv[2]);
//	printString(s);
//	forceMatch(s, s1);
//	return 0;
//}
