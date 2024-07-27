#ifndef TFORMTABLE_H
#define TFORMTABLE_H

#include <QMainWindow>

namespace Ui {
class TFormTable;
}

class TFormTable : public QMainWindow
{
    Q_OBJECT

public:
    explicit TFormTable(QWidget *parent = nullptr);
    ~TFormTable();

private:
    Ui::TFormTable *ui;
};

#endif // TFORMTABLE_H
