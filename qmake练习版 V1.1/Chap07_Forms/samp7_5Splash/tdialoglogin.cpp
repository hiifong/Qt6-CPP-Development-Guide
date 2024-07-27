#include "tdialoglogin.h"
#include "ui_tdialoglogin.h"

TDialogLogin::TDialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TDialogLogin)
{
    ui->setupUi(this);
}

TDialogLogin::~TDialogLogin()
{
    delete ui;
}
