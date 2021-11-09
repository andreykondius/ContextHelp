#pragma once
#include "ui_ContextHelp.h"

#include <QDialog>

namespace Ui
{
    class ContextHelp;
}

namespace app
{

class ContextHelp : public QDialog
{
    Q_OBJECT
public:
    explicit ContextHelp(QWidget* parent = 0);
    ~ContextHelp();

private:
    Ui::ContextHelp *ui = nullptr;
};

}
