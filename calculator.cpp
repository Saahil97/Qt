#include "calculator.h"
#include "ui_calculator.h"

double calcVal=0.0;

bool divTrigger=false;
bool mulTrigger=false;
bool addTrigger=false;
bool subTrigger=false;
bool clearTrigger=false;

calculator::calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];
    for(int i=0;i<10;++i){
        QString butname="Button" + QString::number(i);
        numButtons[i] = calculator::findChild<QPushButton *>(butname);
        connect(numButtons[i],SIGNAL(released()),this,
                SLOT(NumPressed()));
    }
    connect(ui->Add,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiply,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));

    connect(ui->Equals,SIGNAL(released()),this,
            SLOT(EqualButtonPressed()));
 //   connect(ui->ChangeSign,SIGNAL(released()),this,
   //         SLOT(ChangeNumberSign()));

}

calculator::~calculator()
{
    delete ui;
}

void calculator::NumPressed(){
    QPushButton *button =(QPushButton *)sender();
    QString butval = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() ==0)||(displayVal.toDouble() == 0.0)){
        ui->Display->setText(butval);
    }else{
        QString newVal = displayVal+butval;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal,'g',16));

    }
}


void calculator::MathButtonPressed(){
    divTrigger = false;
    mulTrigger = false;
    addTrigger = false;
    subTrigger = false;
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if(QString::compare(butVal,"/",Qt::CaseInsensitive) ==0){
            divTrigger =true;
    }else if(QString::compare(butVal,"*",Qt::CaseInsensitive) ==0){
            mulTrigger =true;
    }else if(QString::compare(butVal,"+",Qt::CaseInsensitive) ==0){
            addTrigger =true;
    }else if(QString::compare(butVal,"-",Qt::CaseInsensitive) ==0){
            subTrigger =true;
    }
    ui->Display->setText("");
}

void calculator::EqualButtonPressed(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(addTrigger || subTrigger|| mulTrigger|| divTrigger){
        if(addTrigger){
            solution = calcVal + dblDisplayVal;
        } else if(subTrigger){
             solution = calcVal - dblDisplayVal;
        } else if(mulTrigger){
             solution = calcVal * dblDisplayVal;
        } else {
            solution = calcVal / dblDisplayVal;
             }
        }
    ui->Display->setText(QString::number(solution));
    }

/*void calculator::ChangeNumberSign(){
    QString displayVal = ui->Display->text();
    QRegExp reg("[-]?[0-9]*");
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }
}
*/

void calculator::on_Clear_clicked()
{
    ui->Display->setText("0");
}
