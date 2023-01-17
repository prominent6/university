#include <graphics.h>  // 图
#include <Windows.h>
#include <MMsystem.h>  // 播放音乐需要的头文件
#pragma comment(lib,"winmm.lib") // 告诉编译器，加载winmm.lib库文件

int main(void) {
	initgraph(672, 672);  // 设置画布
	loadimage(0, (LPCTSTR)L"玫瑰2.jpg");  // 加载图片（与源文件在同一文件夹内）
     // 重复播放音乐（与源文件在同一文件夹内）
	mciSendString(_T("play muxingji.mp3 repeat"), 0, 0, 0);

	system("pause");
	closegraph();
	return 0;
}
