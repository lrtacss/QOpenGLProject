#ifndef AX8OPENGLWIDGET_H
#define AX8OPENGLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>

class AX8OpenGLWidget : public QOpenGLWidget, public QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
public:
    explicit AX8OpenGLWidget(QWidget *parent = nullptr);  // 防止构造函数进行隐式类型转换

protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();

};

#endif // AX8OPENGLWIDGET_H
