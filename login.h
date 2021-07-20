#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
//#include "video.h"

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();


public slots:
    void back_function();
    void into_function();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
