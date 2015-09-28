#include "signindialog.h"
#include "ui_signindialog.h"

SigninDialog::SigninDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SigninDialog)
{
    ui->setupUi(this);
}

SigninDialog::~SigninDialog()
{
    delete ui;
}

void SigninDialog::on_pushButton_clicked()
{

}
