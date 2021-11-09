#pragma once
#include <QtWebKitWidgets/QWebView>

namespace app
{

class WebView : public QWebView
{

public:
    explicit WebView(QWidget* parent = 0);

    void update();
};

}
