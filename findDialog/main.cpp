#include <QAppliction>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    FindDialog find;

    return app.exec();
}
