#ifndef T3_AF_FACE_H
#define T3_AF_FACE_H

#include "t3_af_config.hpp"
#include <QDialog>

namespace Ui {
class T3_AF_face;
}

class T3_AF_face : public QDialog
{
    Q_OBJECT

public:
    explicit T3_AF_face(QDialog *mainWindow, QWidget *parent = 0);
    ~T3_AF_face();

private Q_SLOTS:
    void timeUpdate();
    void exitToMainWindow();

private:
    Ui::T3_AF_face *ui;
    QDialog *_mainWindow;
    void paintEvent(QPaintEvent *event);
};

#endif // T3_AF_FACE_H
