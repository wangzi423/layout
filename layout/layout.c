#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QWidget>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	
    QLabel *information = new QLabel;
        QLineEdit *cmdLineEdit = new QLineEdit;
        QLabel *cmdLabel = new QLabel;
        
        QPushButton *sumitButton = new QPushButton;
        QPushButton *cancelButton = new QPushButton;
        QPushButton *browse = new QPushButton;
        
        information->setText("dasdasdasdasdadadad");
        cmdLabel->setText("Open");
        cmdLineEdit->setText("");
        
        sumitButton->setText("确定");
        cancelButton->setText("cancel");
        browse->setText("browse");
        
        QHBoxLayout *labelHorizontal = new QHBoxLayout;
        labelHorizontal->addWidget(cmdLabel);
        labelHorizontal->addWidget(cmdLineEdit);
        
        
        QHBoxLayout *buttonHorizontal = new QHBoxLayout;
        buttonHorizontal->addWidget(sumitButton);
        buttonHorizontal->addWidget(cancelButton);
        buttonHorizontal->addWidget(browse);
        
        QVBoxLayout *mainLayout = new QVBoxLayout;
        mainLayout->addWidget(information);
        mainLayout->addLayout(labelHorizontal);
        mainLayout->addLayout(buttonHorizontal);
        
        
        QWidget *mainWidget = new Qwidget;
        mainWidget->addLayout(mainLayout);
        mainWidget->show();
	
	
	
	
	
	
	return a.exec();
	
}
