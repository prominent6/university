#/*include <iostream>
#include <Windows.h>

int main(void) {

	std::cout << "1.今天你恋爱了吗？" << std:: endl;
	std::cout << "2.今天你学习了吗？" << std:: endl;
	std::cout << "3.出卷人：苏卓萱" << std::endl;
	std::cout << "4.答卷人：兰懿" << std::endl;
	std::cout << "5.时间：2021.08.24" << std::endl;

	system("pause");
	return 0;
}*/


#include <graphics.h>
#include <Windows.h>

int main(void) {
	initgraph(700, 394);
	setbkmode(TRANSPARENT);
	loadimage(0, (LPCTSTR)L"aiqing.jpg");

    settextcolor(YELLOW);
	settextstyle(30, 0, (LPCTSTR)L"微软雅黑");

	rectangle(50, 40, 300, 80);
	outtextxy(60, 45, (LPCTSTR)L"1.今天你恋爱了吗？");

	rectangle(50, 140, 300, 180);
	outtextxy(60, 145, (LPCTSTR)L"2.今天你学习了吗？");

	rectangle(50, 240, 300, 280);
	outtextxy(60, 245, (LPCTSTR)L"3.出卷人：苏卓萱");

	rectangle(50, 340, 300, 380);
	outtextxy(60, 345, (LPCTSTR)L"4.答卷人：兰懿");

	rectangle(400, 340,650 , 380);
	outtextxy(410, 345, (LPCTSTR)L"5.时间：2021.08.24");

	system("pause");
	closegraph();
	return 0;
}
