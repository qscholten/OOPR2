#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "afdrukker.h"
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
    void on_allowKnop_clicked();
    void on_denyKnop_clicked();
    void on_kaartenbakKnop_clicked();
private:
    std::shared_ptr<Ui::MainWindow> ui;
    std::shared_ptr<Sensor> s1;
    std::array<std::shared_ptr<Deur>,3> deuren = {};
    std::array<std::shared_ptr<Slot>,8> sloten = {};
    std::shared_ptr<Afdrukker> a1;
};

#endif // MAINWINDOW_H
