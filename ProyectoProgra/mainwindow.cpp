#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mantcurso.h"
#include "buscar.h"
#include <qfiledialog.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCerrar_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_6_clicked()
{
    UPmantWindow();
}

void MainWindow::UPmantWindow(){
    MantCurso *frm = new MantCurso;
    frm->show();
    frm->setVisible(true);
}

void MainWindow::on_btnArchivo_clicked()
{   QStringList filters;
    filters << "Text Files (*.txt)";

    QFileDialog dial(this);
    dial.setNameFilters(filters);
    dial.exec();
    dial.show();
}

void MainWindow::on_btnBuscar_clicked()
{
    Buscar *frm = new Buscar;
    frm->show();
    frm->setVisible(true);
}
