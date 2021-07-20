#ifndef VIDEOTAB_H
#define VIDEOTAB_H

#include <QWidget>

namespace Ui {
class videotab;
}

class videotab : public QWidget
{
    Q_OBJECT

public:
    explicit videotab(QWidget *parent = 0);
    ~videotab();

private:
    Ui::videotab *ui;
};

#endif // VIDEOTAB_H
