#ifndef TDIALOGDATA_H
#define TDIALOGDATA_H

#include <QDialog>

namespace Ui {
class TDialogData;
}

class TDialogData : public QDialog
{
    Q_OBJECT

public:
    explicit TDialogData(QWidget *parent = nullptr);
    ~TDialogData();

private:
    Ui::TDialogData *ui;
};

#endif // TDIALOGDATA_H
