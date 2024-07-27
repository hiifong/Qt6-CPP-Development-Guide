#ifndef TFORMDOC_H
#define TFORMDOC_H

#include <QWidget>

namespace Ui {
class TFormDoc;
}

class TFormDoc : public QWidget
{
    Q_OBJECT

public:
    explicit TFormDoc(QWidget *parent = nullptr);
    ~TFormDoc();

private:
    Ui::TFormDoc *ui;
};

#endif // TFORMDOC_H
