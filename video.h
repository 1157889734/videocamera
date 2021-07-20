#ifndef VIDEO_H
#define VIDEO_H

#include <QWidget>
#include "login.h"

namespace Ui {
class video;
}

class video : public QWidget
{
    Q_OBJECT

public:
    explicit video(QWidget *parent = 0);
    ~video();

public slots:
    void login_function();

private:
    Ui::video *ui;
    login *Login;

};

#endif // VIDEO_H
