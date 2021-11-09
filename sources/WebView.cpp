#include "WebView.h"

namespace app
{

WebView::WebView(QWidget *parent)
    : QWebView(parent)
{
    update();
}

void WebView::update()
{
    load(QUrl("qrc:/contextHelp.html"));
}

}
