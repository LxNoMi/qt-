#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#pragma execution_character_set("utf-8")
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_calButton_clicked();

    void on_secondValue_returnPressed();

    void on_firstValue_textChanged(const QString &arg1);

    void on_secondValue_textEdited(const QString &arg1);

    void on_cboxButton_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
