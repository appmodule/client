#ifndef SIGNINDIALOG_H
#define SIGNINDIALOG_H

#include <QDialog>

namespace Ui {
class SigninDialog;
}

class SigninDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SigninDialog(QWidget *parent = 0);
    ~SigninDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SigninDialog *ui;
};

#endif // SIGNINDIALOG_H
