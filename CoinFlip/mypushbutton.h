#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
  //  explicit MyPushButton(QWidget *parent = nullptr);
    //构造函数 参数1 正常显示的图片路径 参数2 按下后显示的图片路径
  MyPushButton(QString normalImg,QString pressImg="");
  QString normalImgPath;
  QString pressImgPath;

 //弹跳特效
  void zoom1();//向下
  void zoom2();//向上
 //重写按钮按下和释放

  void mousePressEvent(QMouseEvent *e);
  void mouseRelease(QMouseEvent *e);

signals:

};

#endif // MYPUSHBUTTON_H
