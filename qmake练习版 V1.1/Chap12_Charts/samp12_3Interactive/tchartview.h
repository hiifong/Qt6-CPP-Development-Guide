#ifndef TCHARTVIEW_H
#define TCHARTVIEW_H

#include <QChartView>
#include <QObject>

class TChartView : public QChartView
{
    Q_OBJECT
public:
    TChartView(QWidget *parent = nullptr);
    ~TChartView();

};

#endif // TCHARTVIEW_H
