#include "Main.h"

#include "Demo01/Demo01.h"
#include "Demo02/Demo02.h"
#include "Demo03/Demo03.h"
#include "Demo04/Demo04.h"
#include "Demo05/Demo05.h"
#include "Demo06/Demo06.h"


// 定义将要调用的 Main 函数
#define DemoMain	Demo06Main


// 程序入口
int main(int argc, char ** argv)
{
	// 获取当前系统的默认编码，并将其设置为 QT 程序的编码格式 - 解决中文乱码
	QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

	return DemoMain(argc, argv);
}
