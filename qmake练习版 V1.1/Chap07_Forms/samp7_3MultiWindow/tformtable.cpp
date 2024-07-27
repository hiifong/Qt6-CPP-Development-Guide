#include "tformtable.h"
#include "ui_tformtable.h"

TFormTable::TFormTable(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TFormTable)
{
    ui->setupUi(this);
}

TFormTable::~TFormTable()
{
    delete ui;
}
