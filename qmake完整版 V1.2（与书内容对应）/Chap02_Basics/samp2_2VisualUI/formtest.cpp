#include "formtest.h"
#include "ui_formtest.h"

FormTest::FormTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormTest)
{
    ui->setupUi(this);
}

FormTest::~FormTest()
{
    delete ui;
}
