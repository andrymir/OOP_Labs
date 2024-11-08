#ifndef MYBROWSER_H
#define MYBROWSER_H

#include <QTextBrowser>

namespace Ui { class MainWindow; }

class MyBrowser : public QTextBrowser
{

public:
    MyBrowser(QWidget* parent);

    void GreenText(QString text);
    void RedText(QString text);
};

#endif // MYBROWSER_H
