#include "frame.h"
//#include "ui_frame.h"
#include <QPainter>

Frame::Frame(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame)
{
    ui->setupUi(this);
}

Frame::~Frame()
{
    delete ui;
}

void Frame::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);

    QPainter painter(this);
    for(int i = 0; i < rectanlesToDraw.size(); ++i)
        painter.fillRect(rectanlesToDraw[i].Rectangle, rectanlesToDraw[i].Color);
}
