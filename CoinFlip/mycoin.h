#ifndef MYCOIN_H
#define MYCOIN_H
#include<QTimer>
#include <QPushButton>

class MyCoin : public QPushButton
{
    Q_OBJECT
public:
   // explicit MyCoin(QWidget *parent = nullptr);
   MyCoin(QString btnImg);

   //金币的属性
   int posX;
   int posY;
   bool flag;

   //该表标志的方法
   void changeFlag();
   QTimer *timer1;//正面翻反面
   QTimer *timer2;//反面翻正面
   int min=1;
   int max=8;

   //执行动画标志
   bool isAnimation=false;

   //重写按下状态
   void mousePressEvent(QMouseEvent *e);

   //是否胜利的标志
   bool isWin=false;

signals:

};

#endif // MYCOIN_H
