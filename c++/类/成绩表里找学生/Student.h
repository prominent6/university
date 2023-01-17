//
//  Student.h
//  test
//
//  Created by panlin on 2022/10/4.
//

#ifndef Student_h
#define Student_h
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    void input();
    void output();
    string getName();
    int getScore1();
    int getScore2();
    int getScore3();
    int getTotal();
private:
    string name;
    int score1,score2,score3;
    int total;
};

#endif /* Student_h */
