#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) : QDialog(parent), ui(new Ui::AboutDialog) {
    ui->setupUi(this);

    QImage qImgIcon(":/prefix1/res/ishara.png");
    ui->lblIcon->setPixmap(imgIcon.fromImage(qImgIcon));

    ui->textEdit->setHtml("<strong>Ishara Version 1</strong><br><br>Author:<br>Saikat Basak<br>(saikatbsk@gmail.com)<br><br>Website: http://saikatbasak.com/projects/ishara/<br><br>Special Thanks to:<br>Mrs. Arundhati Chowdhury");
}

AboutDialog::~AboutDialog() {
    delete ui;
}

void AboutDialog::on_btnCloseDialog_clicked()
{
    AboutDialog::close();
}
