#ifndef ORG_NAME
#define ORG_NAME "SCU&FY-JAM"
#endif
#ifndef APP_NAME
#define APP_NAME "QuickTalk"
#endif

#include <QApplication>
#include <QTextCodec>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    //设置应用组织与应用名，将在设置中使用;
    QCoreApplication::setOrganizationName(ORG_NAME);
    QCoreApplication::setApplicationName(APP_NAME);

    //本地化，使用系统编码，尽可能解决编码乱码问题;
    QTextCodec *codec = QTextCodec::codecForName("System");
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //check mothod should invoke here!
    
    return a.exec();
}
