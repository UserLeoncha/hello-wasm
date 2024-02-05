#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <QFileDialog>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
private:
    //factors
    QVBoxLayout *layout = new QVBoxLayout(this);
    QPushButton *button1 = new QPushButton("open picture");
    QPushButton *button2 = new QPushButton("get quatree picture");
    QPushButton *button3 = new QPushButton("step by step");
    QLabel *label1 = new QLabel(this);
    QLabel *label2 = new QLabel(this);
private slots:

    void openpic();
    void quadtreepic();
    void stepbystep();

};
#endif // DIALOG_H
