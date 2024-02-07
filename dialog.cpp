#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{


    //set factors properties
    this->setFixedSize(800, 600);

    //connect
    connect(button1, &QPushButton::clicked, this, &Dialog::openpic);
    connect(button2, &QPushButton::clicked, this, &Dialog::quadtreepic);
    connect(button3, &QPushButton::clicked, this, &Dialog::stepbystep);

    //setting layout
    vlayout->addStretch(1);
    vlayout->addWidget(button1);
    vlayout->addStretch(1);
    vlayout->addWidget(button2);
    vlayout->addStretch(1);
    vlayout->addWidget(button3);
    vlayout->addStretch(1);

    hlayout->addWidget(label1);
    hlayout->addStretch(1);
    hlayout->addWidget(label2);
    vlayout->addLayout(hlayout);

    this->setLayout(vlayout);
}

Dialog::~Dialog() {

}

void Dialog::openpic()
{
    QString filename;
    filename=QFileDialog::getOpenFileName(this,
                                            tr("choose picture"),
                                            "",
                                            tr("Images (*.png *.bmp *.jpg)"));
    if(filename.isEmpty()) {
        return;
    } else {
        QImage* img = new QImage;
        if(!(img->load(filename))) {
            QMessageBox::information(this,
                                     tr("open failed"),
                                     tr("open failed!"));

            delete img;
            return;
        }
        label1->setPixmap(QPixmap::fromImage(*img));
        label2->setPixmap(QPixmap::fromImage(*img));
    }
}

void Dialog::quadtreepic()
{
    qDebug() << "quadtreepic function";
}

void Dialog::stepbystep()
{
    qDebug() << "stepbystep";
}

