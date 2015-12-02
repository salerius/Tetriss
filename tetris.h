#ifndef TETRIS_H
#define TETRIS_H

#include <QDialog>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFont>

namespace Ui {
class Tetris;
}

class Tetris : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tetris(QWidget *parent = 0);

private slots:
    void on_custom_button_clicked(bool checked);
    void on_pushButton_clicked();

private:
    QPushButton *start;
    QPushButton *pause;
    QPushButton *quit;
    Ui::Tetris *ui;

};

#endif // TETRIS_H
