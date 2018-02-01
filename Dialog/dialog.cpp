#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_countBtn_clicked()
{
    bool ok;
    QString tempStr;
    //QString valueStr=ui->r
    int valueInt=valueStr.toInt(&ok);
}
