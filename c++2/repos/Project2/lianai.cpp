#/*include <iostream>
#include <Windows.h>

int main(void) {

	std::cout << "1.��������������" << std:: endl;
	std::cout << "2.������ѧϰ����" << std:: endl;
	std::cout << "3.�����ˣ���׿��" << std::endl;
	std::cout << "4.����ˣ���ܲ" << std::endl;
	std::cout << "5.ʱ�䣺2021.08.24" << std::endl;

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
	settextstyle(30, 0, (LPCTSTR)L"΢���ź�");

	rectangle(50, 40, 300, 80);
	outtextxy(60, 45, (LPCTSTR)L"1.��������������");

	rectangle(50, 140, 300, 180);
	outtextxy(60, 145, (LPCTSTR)L"2.������ѧϰ����");

	rectangle(50, 240, 300, 280);
	outtextxy(60, 245, (LPCTSTR)L"3.�����ˣ���׿��");

	rectangle(50, 340, 300, 380);
	outtextxy(60, 345, (LPCTSTR)L"4.����ˣ���ܲ");

	rectangle(400, 340,650 , 380);
	outtextxy(410, 345, (LPCTSTR)L"5.ʱ�䣺2021.08.24");

	system("pause");
	closegraph();
	return 0;
}
