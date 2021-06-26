#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "application.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void refreshTypeTable(QSqlQueryModel *model);
    void refreshResultTable(QSqlQueryModel *model);

private:
    Ui::MainWindow *ui;

public slots:
    void onSearchButtonClick();        //搜索按钮点击事件
    void onAddButtonClick();           //添加商品按钮点击事件
    void onDeleteButtonClick();       //删除按钮点击事件
};

#endif // MAINWINDOW_H
