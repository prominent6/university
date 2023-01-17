//请设计一个学生类student，学号、本次考试成绩是其私有数据成员，
//同时有一个计算本次考试平均成绩的友元函数 double average(student *p,int count)
#include  <iostream>
#include  <string>
#define  N  100
using  namespace  std;
class  student
{
public:
	student(string  id = "", int  score = 0) :id(id), score(score) {};
	void setstudent(string i, int s) {
		id = i;
		score = s;
	}
	friend double average(student* p, int count);
private:
	string id;
	int score;
};
double average(student* p, int count) {
	double ave;
	double all=0;
	for (int i = 0; i < count; i++) {
		all += p[i].score;
	};
	ave = all / count;
	return ave;
}
int main() {
	student stu[N];
	string id;
	int score, total = 0;
	double aver;
	cin >> id;
	while ((id != "0") && total < N) {
		cin >> score;
		stu[total].setstudent(id,score);
		total++; //
		cin >> id;
	}
	aver = average(stu, total);
	cout << aver;
	return 0;
}

