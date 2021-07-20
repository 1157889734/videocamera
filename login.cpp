#include "login.h"
#include "ui_login.h"
#include "video.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QPixmap(":/login.jpeg")));
    this->setPalette(palette);
    ui->label->setFont(QFont("宋体",20));
    ui->label_2->setFont(QFont("宋体",20));
    ui->lineEdit->setFont(QFont("宋体",20));
    ui->pushButton->setFont(QFont("宋体",25));
    ui->pushButton->setStyleSheet("text-align:center;background-color:green;color: white");
    ui->pushButton_2->setFont(QFont("宋体",25));
    ui->pushButton_2->setStyleSheet("text-align:center;background-color:orange;color: white");

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(into_function()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(back_function()));
}

login::~login()
{
    delete ui;
}

void login::into_function()
{
    if(ui->lineEdit_2->text()=="")
    {

    }
}
void login::back_function()
{
    this->hide();
//    video->show();

//    mainwidegt->show();
}
