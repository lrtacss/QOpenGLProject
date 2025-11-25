#include "mainwindow.h"
#include "ax8openglwidget.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , openGLWidget(new AX8OpenGLWidget(this))
{
    ui->setupUi(this);
    setWindowTitle("第一个OpenGL示例");
    // setCentralWidget(ui->openGLWidget);
    setCentralWidget(openGLWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}
