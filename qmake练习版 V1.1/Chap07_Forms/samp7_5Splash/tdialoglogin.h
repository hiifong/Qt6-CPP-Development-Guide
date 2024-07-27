#ifndef TDIALOGLOGIN_H
#define TDIALOGLOGIN_H

#include <QDialog>

namespace Ui {
class TDialogLogin;
}

class TDialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit TDialogLogin(QWidget *parent = nullptr);
    ~TDialogLogin();

private:
    Ui::TDialogLogin *ui;
};

#endif // TDIALOGLOGIN_H
