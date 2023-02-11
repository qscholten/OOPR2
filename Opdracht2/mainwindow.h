#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "deur.h"
#include <QMainWindow>
#include <memory>

namespace Ui {
class MainWindow;
}
class Sensor;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
      ~MainWindow();

private slots:
    void on_sensor_act_clicked();
    void on_schuifdeurKnop_clicked();
    void on_draaideurKnop1_clicked();
    void on_draaideurKnop2_clicked();

private:
    std::shared_ptr<Ui::MainWindow> ui;
    std::shared_ptr<Sensor> s1;
    std::array<std::shared_ptr<Deur>,3> deuren = {};
    std::shared_ptr<Slot> slot0;
    std::shared_ptr<Slot> slot1;
    std::shared_ptr<Slot> slot2;
};

#endif // MAINWINDOW_H
