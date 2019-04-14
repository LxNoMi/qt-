#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_calButton_clicked()
{
    long long int firstvalue=ui->firstValue->text().toInt();
    long long int secondvalue=ui->secondValue->text().toInt();
    double value=-9999999;
    int comboxvalue=ui->cboxButton->currentIndex();
    switch (comboxvalue)
    {
    case 0:
    {
        value=firstvalue+secondvalue;
            ui->myValue->setText(QString::number(value));
    }
        break;
    case 1:
        value=firstvalue-secondvalue;
        ui->myValue->setText(QString::number(value));
        break;
    case 2:
        value=firstvalue*secondvalue;
        ui->myValue->setText(QString::number(value));
        break;
    case 3:
    {
        if(secondvalue==0)
            ui->myValue->setText("除数不能为0");
        else
        {
            value=(firstvalue*1.0)/secondvalue;
            ui->myValue->setText(QString::number(value));
        }
    }
        break;
    }
}

void MainWindow::on_secondValue_returnPressed()
{
    long long int firstvalue=ui->firstValue->text().toInt();
    long long int secondvalue=ui->secondValue->text().toInt();
    double value=-9999999;
    int comboxvalue=ui->cboxButton->currentIndex();
    switch (comboxvalue)
    {
    case 0:
    {
        value=firstvalue+secondvalue;
            ui->myValue->setText(QString::number(value));
    }
        break;
    case 1:
        value=firstvalue-secondvalue;
        ui->myValue->setText(QString::number(value));
        break;
    case 2:
        value=firstvalue*secondvalue;
        ui->myValue->setText(QString::number(value));
        break;
    case 3:
    {
        if(secondvalue==0)
            ui->myValue->setText("除数不能为0");
        else
        {
            value=(firstvalue*1.0)/secondvalue;
            ui->myValue->setText(QString::number(value));
        }
    }
        break;
    }
}

void MainWindow::on_firstValue_textChanged(const QString &arg1)
{
    ui->myValue->setText(" ");
}

void MainWindow::on_secondValue_textEdited(const QString &arg1)
{
    long long int firstvalue=ui->firstValue->text().toInt();
    long long int secondvalue=ui->secondValue->text().toInt();
    double value=-9999999;
    int comboxvalue=ui->cboxButton->currentIndex();
    switch (comboxvalue)
    {
    case 0:
    {
        value=firstvalue+secondvalue;
            ui->myValue->setText(QString::number(value));
    }
        break;
    case 1:
        value=firstvalue-secondvalue;
        ui->myValue->setText(QString::number(value));
        break;
    case 2:
        value=firstvalue*secondvalue;
        ui->myValue->setText(QString::number(value));
        break;
    case 3:
    {
        if(secondvalue==0)
            ui->myValue->setText("除数不能为0");
        else
        {
            value=(firstvalue*1.0)/secondvalue;
            ui->myValue->setText(QString::number(value));
        }
    }
        break;
    }
}

void MainWindow::on_cboxButton_currentIndexChanged(int index)
{
    long long int firstvalue=ui->firstValue->text().toInt();
    long long int secondvalue=ui->secondValue->text().toInt();
    double value=-9999999;
    int comboxvalue=ui->cboxButton->currentIndex();
    switch (comboxvalue)
    {
    case 0:
    {
        value=firstvalue+secondvalue;
        if(value==520)
            ui->myValue->setText("何婷婷，我爱你呀！");
        else
            ui->myValue->setText(QString::number(value));
    }
        break;
    case 1:
        value=firstvalue-secondvalue;
        ui->myValue->setText(QString::number(value));
        break;
    case 2:
        value=firstvalue*secondvalue;
        ui->myValue->setText(QString::number(value));
        break;
    case 3:
    {
        if(secondvalue==0)
            ui->myValue->setText("笨蛋，除数不能为0");
        else
        {
            value=(firstvalue*1.0)/secondvalue;
            ui->myValue->setText(QString::number(value));
        }
    }
        break;
    }
}
