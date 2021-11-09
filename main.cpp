#include "ContextHelp.h"
#include <QApplication>

int main(int argc, char* argv[])
{    
    QApplication a(argc, argv);

    app::ContextHelp ch;
    ch.show();

    return a.exec();
}
