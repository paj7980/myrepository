#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "seconddialog.h"

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
    secondDialog secdialog;$
    secdialog.setModal(true);
    secdialog.exec()
}

public:
    void setImage(const Mat &image);


    SecondDialog::SecondDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondDialog)
    {
        ui->setupUi(this);
    }

    void SecondDialog::setImage(const Mat &image){
        QImage dest((const uchar *) image.data, image.cols, image.rows, image.step, QImage::Format_Indexed8);
        ui->label_img->setPixmap(QPixmap::fromImage(dest));
    }
