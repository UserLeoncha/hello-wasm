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
    layout->addStretch(1);
    layout->addWidget(button1);
    layout->addStretch(1);
    layout->addWidget(button2);
    layout->addStretch(1);
    layout->addWidget(button3);
    layout->addStretch(1);
    layout->addWidget(label1);
    layout->addStretch(1);
    layout->addWidget(label2);
    layout->addStretch(1);

    this->setLayout(layout);
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

