#include "ContextHelp.h"

namespace app
{

ContextHelp::ContextHelp(QWidget *parent)
    : QDialog(parent),
      ui(new Ui::ContextHelp)
{
    ui->setupUi(this);
}

ContextHelp::~ContextHelp()
{
    delete ui;
}

}
