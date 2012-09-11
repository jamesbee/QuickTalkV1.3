#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QActionGroup>
#include <QSettings>
#include <QCloseEvent>
#include "chatcontrl.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //### 控制函数; ###
    void initApp();


private slots:
    bool saveSettings();
    void closeEvent(QCloseEvent *event);

private:
    //### 界面元素; ###
    Ui::MainWindow *ui;
    QActionGroup *sendMoods;

    //### 控制元素; ###
    QSettings appSettings;
    QString localHost;
    int localPort;
    QString remoteHost;
    int remotePort;
    ChatContrl *chatForm;

    //### 控制函数; ###
    //    初始化函数;
    void creatActions();
    //void creatMenus();
    void creatStatuBar();
    void initMe();
    //    控制函数;
    void loadSettings();
};

#endif // MAINWINDOW_H
