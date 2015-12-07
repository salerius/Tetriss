#include "tetris.h"
#include "ui_tetris.h"

Tetris::Tetris(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tetris)
{
    ui->setupUi(this);
    start = new QPushButton("Start", this);
    start->setGeometry(20,340,100,30);
    start->setFont(QFont("Times", 16, QFont::Bold));

    pause = new QPushButton("Pause", this);
    pause->setGeometry(215,340,100,30);
    pause->setFont(QFont("Times", 16, QFont::Bold));
    pause->setEnabled(false);
    connect(pause, SIGNAL(clicked(bool)),
        this, SLOT(on_custom_button_clicked(bool)));

    quit = new QPushButton("Exit", this);
    quit->setGeometry(400,340,100,30);
    quit->setFont(QFont("Times", 16, QFont::Bold));
    connect(quit, SIGNAL(clicked(bool)),
        this, SLOT(on_pushButton_clicked()));



 //   this->setGeometry(0, 0, 640, 480);
//    horizontalSize = new QLineEdit(this);
//    verticalSize = new QLineEdit(this);
    frame = new Frame(this);
//    horizontalSize->setGeometry(50, 400, 60, 20);
//    verticalSize->setGeometry(450, 400, 60, 20);
    frame->setGeometry(200, 100, 200, 300);
    frame->setFrameStyle(1);
    frame->setLineWidth(1);
    connect(this, SIGNAL(onLeftOrRightPressed()), this, SLOT(testSlot()));
    this->setFocus();



}

void Tetris::on_custom_button_clicked(bool checked)
{
    QPushButton* button = dynamic_cast<QPushButton*>(sender());
    if(button)
    {
        QString str = checked ? "Pause" : "Resume";
        button->setText(str);
    }

}

void Tetris::on_pushButton_clicked()
{
    QApplication::exit();
}



void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
        case Qt::Key_Left:
            emit onLeftOrRightPressed();
            break;
        case Qt::Key_Right:
            emit onLeftOrRightPressed();
            break;
        case Qt::Key_Down:
            emit onTopOrDownPressed();
            break;
        case Qt::Key_Up:
            emit onTopOrDownPressed();
            break;
        default:
            QMainWindow::keyPressEvent(event);
        }
}

void MainWindow::testSlot()
{
    int x = 10;
}


