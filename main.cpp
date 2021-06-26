#include "loginwindow.h"
#include "AddGoodItem.h"

#include "application.h"

QApplication* app;

int main(int argc, char *argv[])
{
    // 初始化 QT 窗口
    app = new QApplication(argc, argv);

    // 启动程序时，显示登录窗口
    /*
    LoginWindow w;
    w.show();
    */

    SQLThread thread;
    thread.runSync();
    AddGoodItem w(nullptr, "modify", 14);
    w.show();

    return app->exec();
}
