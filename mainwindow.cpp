#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QWidget>
#include <QWebEngineView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString url = "http://google.com"; // TeaSpeak WebClient URL (maybe, built-in http server)
    QWebEngineView *view = new QWebEngineView(this);
    view->load(url);

    setCentralWidget(view);
}


MainWindow::~MainWindow()
{
    delete ui;
}
