#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    creatActions();
    //creatMenus();
    creatStatuBar();
    initMe();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initApp()
{
    //check host, check device
}

void MainWindow::creatActions()
{
    this->sendMoods = new QActionGroup(this);
    sendMoods->addAction(ui->EnterSendAction);
    sendMoods->addAction(ui->Ctrl_EnterSendAction);

    //########## Debugging only! ############
    //使用QSetting加载设置！
    //ui->EnterSendAction->setChecked(true);
}

void MainWindow::creatStatuBar()
{

}

void MainWindow::initMe()
{
    chatForm = new ChatContrl(this);
    this->setCentralWidget(chatForm->chatView());
    connect(chatForm,SIGNAL(closeRequest()),
            this,SLOT(close()));
    loadSettings();
}

void MainWindow::loadSettings()
{
    //设置发送快捷方式;
    {
        if (appSettings.value("is-enter-checked").toBool())
        {
            ui->EnterSendAction->setChecked(true);
        }
        else if (appSettings.value("is-ctrl_enter-checked").toBool())
        {
            ui->Ctrl_EnterSendAction->setChecked(true);
        }
        else
        {
            ui->EnterSendAction->setChecked(true);
        }
    }
    //加载地址和端口;
    {
        if (!(localPort = appSettings.value("local-port").toInt()))
        {
            localPort = 6789;
        }
        if (!(remotePort = appSettings.value("remote-port").toInt()))
        {
            remotePort = 6789;
        }
        if (!(remoteHost = appSettings.value("remote-host-address").toString()).length())
        {
            //remote host unset! invoke host setting dialog!
        }
        if (!(localHost = appSettings.value("local-host-address").toString()).length())
        {
            //local host unset! invoke device select dialog!
        }
    }
}

bool MainWindow::saveSettings()
{
    //保存发送快捷方式;
    {
        if (ui->EnterSendAction->isChecked())
        {
            appSettings.setValue("is-enter-checked",true);
            appSettings.setValue("is-ctrl_enter-checked",false);
        }
        else
        {
            appSettings.setValue("is-enter-checked",false);
            appSettings.setValue("is-ctrl_enter-checked",true);
        }
    }
    //保存地址与端口;
    {
        appSettings.setValue("local-port",localPort);
        appSettings.setValue("remote-port",remotePort);
        appSettings.setValue("local-host-address",localHost);
        appSettings.setValue("remote-host-address",remoteHost);
    }
    return true;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    saveSettings();
    event->accept();
}
