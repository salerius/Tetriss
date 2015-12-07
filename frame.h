#ifndef FRAME_H
#define FRAME_H

#include <QFrame>
#include <QList>
#include "rectangleinfo.h"

namespace Ui {
class Frame;
}


class frame : public QFrame
{
    Q_OBJECT

public:
    explicit Frame(QWidget *parent = 0);
//    ~Frame;
    QList<rectangleinfo> rectangleToDraw;

protected:
    virtual void paintEvent(QPaintEvent *event);

private:
    Ui:Frame *ui;
    //frame();
};

#endif // FRAME_H
