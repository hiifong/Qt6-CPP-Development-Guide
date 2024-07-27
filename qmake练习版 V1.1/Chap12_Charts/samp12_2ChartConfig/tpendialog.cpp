#include "tpendialog.h"
#include "ui_tpendialog.h"

TPenDialog::TPenDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TPenDialog)
{
    ui->setupUi(this);
}

TPenDialog::~TPenDialog()
{
    delete ui;
}
