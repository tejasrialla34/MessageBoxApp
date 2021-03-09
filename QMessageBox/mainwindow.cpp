#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QtDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
QMessageBox::information(this,"Teja Sri 212218104015","This Is Information Box");

}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"Teja Sri","Do You Like Apples",QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes){
        QMessageBox::information(this,"APPLE","Yes");
    }
    else{
        QMessageBox::information(this,"No Apple","No");
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"Teja Sri","this is a custom message",QMessageBox::Yes|QMessageBox::No|QMessageBox::YesAll|QMessageBox::NoAll);
    if(reply==QMessageBox::Yes)
        qDebug()<< "Nothing is Dispalyed";
    else if(reply==QMessageBox::YesAll)
        QMessageBox::warning(this,"Message Display","Display The Message With Warning As Yes To All");
    else if(reply==QMessageBox::No)
        qDebug() <<"Nothing Is Displayed";
    else
        QMessageBox::warning(this,"No Message Dispaly","Dont Display The Message With Warning As No To All");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Critical Message","This is a Warning Message");
}
