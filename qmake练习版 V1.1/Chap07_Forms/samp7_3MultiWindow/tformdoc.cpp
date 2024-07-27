#include "tformdoc.h"
#include "ui_tformdoc.h"

TFormDoc::TFormDoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TFormDoc)
{
    ui->setupUi(this);
}

TFormDoc::~TFormDoc()
{
    delete ui;
}
