#include "mydialog.h"
#include "ui_mydialog.h"

myDialog::myDialog(QWidget *parent) :
    QMainWindow(parent)
    //ui(new Ui::myDialog)
{
    setupUi(this);
    connect(pushButton, SIGNAL(clicked()), SLOT(enter()));
}

myDialog::~myDialog()
{
    //delete ui;
}

void myDialog::enter()
{
    buf = "I said:\n" + lineEdit->text() + '\n';
    lineEdit->clear();

    textBrowser->setText(buf);
    textBrowser->moveCursor(QTextCursor::End);
}
