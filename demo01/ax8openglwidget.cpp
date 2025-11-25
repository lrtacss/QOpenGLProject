#include "ax8openglwidget.h"

AX8OpenGLWidget::AX8OpenGLWidget(QWidget* parent):QOpenGLWidget(parent) {


}


void AX8OpenGLWidget::initializeGL(){
    this->initializeOpenGLFunctions();  //  需要进行OpenGL函数初始化
}

void AX8OpenGLWidget::resizeGL(int w, int h){

}
//  进行paintGL进行图像绘制
void AX8OpenGLWidget::paintGL(){
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);
}
