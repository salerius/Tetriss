#ifndef TETRIS_H
#define TETRIS_H

#include <QDialog>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFont>
#include <QLineEdit>
#include <QFrame>
#include <QKeyEvent>
#include "frame.h"

namespace Ui {
class Tetris;
}

class Tetris : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tetris(QWidget *parent = 0);
    ~Tetris();

protected:
virtual void keyPressEvent(QKeyEvent *event);

private slots:
    void on_custom_button_clicked(bool checked);
    void on_pushButton_clicked();
    void testSlot();// //////////////

signals:
    void onLeftOrRightPressed();
    void onTopOrDownPressed();
private:
    QPushButton *start;
    QPushButton *pause;
    QPushButton *quit;
    Ui::Tetris *ui;
    QLineEdit* horizontalSize;
    QLineEdit* verticalSize;

};

#endif // TETRIS_H

