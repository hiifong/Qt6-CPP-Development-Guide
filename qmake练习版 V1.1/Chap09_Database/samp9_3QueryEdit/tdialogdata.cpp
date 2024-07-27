#include "tdialogdata.h"
#include "ui_tdialogdata.h"

TDialogData::TDialogData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TDialogData)
{
    ui->setupUi(this);
}

TDialogData::~TDialogData()
{
    delete ui;
}
