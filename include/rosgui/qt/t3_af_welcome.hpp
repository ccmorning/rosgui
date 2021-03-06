#ifndef T3_AF_WELCOME_H
#define T3_AF_WELCOME_H

#include "t3_af_config.hpp"
#include <QDialog>

//#include "t3_af_login.h"
#include "t3_af_mainwindow.hpp"

namespace Ui {
class T3_AF_welcome;
}

class T3_AF_welcome : public QDialog
{
    Q_OBJECT

public:
    explicit T3_AF_welcome(QWidget *parent = 0);
    ~T3_AF_welcome();



private Q_SLOTS:
    void timeUpdate();
    void enterSystem();

private:
    Ui::T3_AF_welcome *ui;
};

#endif // T3_AF_WELCOME_H
