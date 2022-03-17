#include<QApplication>
#include<QLabel>

int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hi World!");
    label->setWindowTitle("My Apps");
    label->show();
    return app.exec();
}

