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





