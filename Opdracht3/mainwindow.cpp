#include "mainwindow.h"
#include "codeslot.h"
#include "sleutelslot.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "hallsensor.h"
#include "schuifdeur.h"
#include "draaideur.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sloten[0]=std::make_shared<SleutelSlot>("Qing");
    sloten[1]=std::make_shared<CodeSlot>(2023);
    sloten[2]=std::make_shared<SleutelSlot>("OOPR");
    sloten[3]=std::make_shared<CodeSlot>(2020);
    s1=std::make_shared<HallSensor>(515,160);
    deuren[0]=std::make_shared<SchuifDeur>(503,250,80, s1.get());
    deuren[1]=std::make_shared<DraaiDeur>(295,290,30,true);
    deuren[0]->addSlot(sloten[0].get());
    deuren[0]->addSlot(sloten[2].get());
    deuren[1]->addSlot(sloten[1].get());
    //deuren[1]->addSlot(sloten[3].get());
    deuren[2]=std::make_shared<DraaiDeur>(248,140,40,false);
}

MainWindow::~MainWindow()
{
}

void MainWindow::paintEvent(QPaintEvent *event){

    QPainter painter(this);
    QPen pen;
    QImage image("Gebouw.png");//"/home/oopr1/Documents/gebouw/Gebouw.png");

    pen.setColor(Qt::green);
    pen.setWidth(4);
    painter.setPen(pen);
    painter.drawImage(10,10,image);

    s1->teken(this);
    deuren[0]->teken(this);
    deuren[1]->teken(this);
    deuren[2]->teken(this);
}

void MainWindow::on_sensor_act_clicked()
{
    if(s1->isGeactiveerd())
         s1->deactiveer();
     else
         s1->activeer();
     update();
}

void MainWindow::on_schuifdeurKnop_clicked() {
    if(deuren[0]->isDeurOpen()) {
        deuren[0]->sluit();
    }
    else {
        if (deuren[0]->aantalSloten() != 0) {
            deuren[0]->krijgSlot(0)->ontgrendel(ui->lineEdit->text().toStdString()); //Qing
            deuren[0]->krijgSlot(1)->ontgrendel("OOPR"); //OOPR
            ui->lineEdit->setText("");
        }
        deuren[0]->open();
    }
    if(deuren[0]->isDeurOpen()) {
        s1->deactiveer();
    }
    update();
}

void MainWindow::on_draaideurKnop1_clicked() {
    if(deuren[2]->isDeurOpen()) {
        deuren[2]->sluit();
    }
    else {
        if (deuren[2]->aantalSloten() != 0) {
            deuren[2]->krijgSlot(0)->ontgrendel(ui->lineEdit->text().toStdString()); //no lock
            ui->lineEdit1->setText("");
        }
        deuren[2]->open();
    }
    update();
}

void MainWindow::on_draaideurKnop2_clicked() {
    if(deuren[1]->isDeurOpen()) {
        deuren[1]->sluit();
    }
    else {
        if (deuren[1]->aantalSloten() != 0) {
            deuren[1]->krijgSlot(0)->ontgrendel(ui->lineEdit2->text().toStdString()); //2023
            //deuren[1]->krijgSlot(1)->ontgrendel("2020"); //2020
            ui->lineEdit2->setText("");
        }
        deuren[1]->open();
    }
    update();
}
