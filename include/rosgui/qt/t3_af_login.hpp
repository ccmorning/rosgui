#ifndef T3_AF_LOGIN_H
#define T3_AF_LOGIN_H

#include "t3_af_config.hpp"
#include <QDialog>
#include <QMessageBox>

#include "t3_af_userdata.hpp"
#include "t3_af_mainwindow.hpp"

namespace Ui {
class T3_AF_logIn;
}

class T3_AF_logIn : public QDialog
{
    Q_OBJECT

public:
    explicit T3_AF_logIn(QDialog *welcome, QWidget *parent = 0);
    ~T3_AF_logIn();


    QString getPassword(QString getUserName);

private Q_SLOTS:
    void timeUpdate();
    void backToWelcome();
    void logIn();

private:
    Ui::T3_AF_logIn *ui;
    QDialog *_welcome;
    void paintEvent(QPaintEvent *event);
};

#endif // T3_AF_LOGIN_H
