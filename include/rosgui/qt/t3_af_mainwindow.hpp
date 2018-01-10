#ifndef T3_AF_MAINWINDOW_H
#define T3_AF_MAINWINDOW_H

#include "t3_af_config.hpp"
#include <QDialog>

#include "t3_af_confirmexit.hpp"
#include "t3_af_face.hpp"
#include "t3_af_weatherforecast.hpp"
#include "t3_af_map.hpp"
#include "t3_af_robotinfo.hpp"
#include "t3_pushbutton.hpp"

namespace Ui {
class T3_AF_mainWindow;

}

class T3_AF_mainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit T3_AF_mainWindow(QDialog *welcome, QWidget *parent = 0);
    ~T3_AF_mainWindow();


    void toWeatherForecast();
    void toRobotInfo();

private Q_SLOTS:
    void timeUpdate();
    void weatherUpdate(Today today);
    void exitToWelcome();
    void toFace();
    void toMap();

private:
    Ui::T3_AF_mainWindow *ui;
    QDialog *_welcome;
    void paintEvent(QPaintEvent *event);
    T3_AF_getWeather *_weather;
    T3PushButton *_button;
};

#endif // T3_AF_MAINWINDOW_H
