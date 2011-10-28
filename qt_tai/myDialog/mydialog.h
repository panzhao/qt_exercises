#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QMainWindow>
#include "ui_mydialog.h"

namespace Ui {
    class myDialog;
}

class myDialog : public QMainWindow, public Ui_myDialog
{
    Q_OBJECT

public:
    explicit myDialog(QWidget *parent = 0);
    ~myDialog();

private slots:
    void enter();

private:
    QString buf;
    //Ui::myDialog *ui;

};

#endif // MYDIALOG_H
