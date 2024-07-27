#ifndef TPENDIALOG_H
#define TPENDIALOG_H

#include <QDialog>

namespace Ui {
class TPenDialog;
}

class TPenDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TPenDialog(QWidget *parent = nullptr);
    ~TPenDialog();

private:
    Ui::TPenDialog *ui;
};

#endif // TPENDIALOG_H
