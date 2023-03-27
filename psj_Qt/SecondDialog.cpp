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
