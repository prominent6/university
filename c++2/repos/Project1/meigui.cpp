#include <graphics.h>  // ͼ
#include <Windows.h>
#include <MMsystem.h>  // ����������Ҫ��ͷ�ļ�
#pragma comment(lib,"winmm.lib") // ���߱�����������winmm.lib���ļ�

int main(void) {
	initgraph(672, 672);  // ���û���
	loadimage(0, (LPCTSTR)L"õ��2.jpg");  // ����ͼƬ����Դ�ļ���ͬһ�ļ����ڣ�
     // �ظ��������֣���Դ�ļ���ͬһ�ļ����ڣ�
	mciSendString(_T("play muxingji.mp3 repeat"), 0, 0, 0);

	system("pause");
	closegraph();
	return 0;
}
