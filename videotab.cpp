#include "videotab.h"
#include "ui_videotab.h"

videotab::videotab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::videotab)
{
    ui->setupUi(this);
}

videotab::~videotab()
{
    delete ui;
}
