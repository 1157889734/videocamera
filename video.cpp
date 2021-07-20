#include "video.h"
#include "ui_video.h"

video::video(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::video)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QPixmap(":/background.jpeg")));
    this->setPalette(palette);
    ui->pushButton->setFont(QFont("宋体",25));
    ui->pushButton->setStyleSheet("text-align:center;background-color:blue;color: white");
    ui->pushButton_2->setFont(QFont("宋体",25));
    ui->pushButton_2->setStyleSheet("text-align:center;background-color:blue;color: white");

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(login_function()));
    Login = new login();
}

video::~video()
{
    delete ui;
}
void video::login_function()
{
    this->hide();
    Login->show();
}
