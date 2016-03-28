#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QString>
#include <QtMath>
#include <QKeyEvent>
#include "coolplayer.h"
#include "ui_coolplayer.h"


CoolPlayer::CoolPlayer(QWidget *parent):QWidget(parent),ui(new Ui::CoolPlayer)
{
    ui->setupUi(this);

    ui->textBrowser->setPlainText("0");
    ui->textBrowser->setAlignment(Qt::AlignRight);
    ui->textBrowser->setCursor(Qt::BlankCursor);

    //QTextCursor textCursor = ui->textEdit->textCursor();
    //textCursor.movePosition(QTextCursor::Right, QTextCursor::MoveAnchor,1);
    //ui->textEdit->setTextCursor(textCursor);
}

CoolPlayer::~CoolPlayer()
{
    delete ui;
}

void CoolPlayer::getInputValue(QString out){
    if(!Done){
        if(!firstDone) {
            inputValue_1.push_back(out);
            ui->textBrowser->setPlainText(inputValue_1);
            ui->textBrowser->setAlignment(Qt::AlignRight);
        }else{
            inputValue_2.push_back(out);
            ui->textBrowser->setPlainText(inputValue_2);
            ui->textBrowser->setAlignment(Qt::AlignRight);
        }
    }else{
        inputValue_1.clear();
        inputValue_1.push_back(out);
        ui->textBrowser->setPlainText(inputValue_1);
        ui->textBrowser->setAlignment(Qt::AlignRight);
        Done = false;
    }
}

void CoolPlayer::on_Cal_1_clicked()
{
    int i = 1;
    QString out = QString::number(i);
    getInputValue(out);
}

void CoolPlayer::on_Cal_2_clicked()
{
    int i = 2;
    QString out = QString::number(i);
    getInputValue(out);
}

void CoolPlayer::on_Cal_3_clicked()
{
    int i = 3;
    QString out = QString::number(i);
    getInputValue(out);
}

void CoolPlayer::on_Cal_4_clicked()
{
    int i = 4;
    QString out = QString::number(i);
    getInputValue(out);
}

void CoolPlayer::on_Cal_5_clicked()
{
    int i = 5;
    QString out = QString::number(i);
    getInputValue(out);
}

void CoolPlayer::on_Cal_6_clicked()
{
    int i = 6;
    QString out = QString::number(i);
    getInputValue(out);
}

void CoolPlayer::on_Cal_7_clicked()
{
    int i = 7;
    QString out = QString::number(i);
    getInputValue(out);
}

void CoolPlayer::on_Cal_8_clicked()
{
    int i = 8;
    QString out = QString::number(i);
    getInputValue(out);
}

void CoolPlayer::on_Cal_9_clicked()
{
    int i = 9;
    QString out = QString::number(i);
    getInputValue(out);
}

void CoolPlayer::on_Cal_0_clicked()
{
    int i = 0;
    QString out = QString::number(i);
    if(!Done){
        if(!firstDone) {
            if(!inputValue_1.isEmpty()){
                inputValue_1.push_back(out);
                ui->textBrowser->setPlainText(inputValue_1);
                ui->textBrowser->setAlignment(Qt::AlignRight);
            }else{
                ui->textBrowser->setPlainText("0");
                ui->textBrowser->setAlignment(Qt::AlignRight);
            }
        }else{
            if(!inputValue_2.isEmpty()){
                inputValue_2.push_back(out);
                ui->textBrowser->setPlainText(inputValue_2);
                ui->textBrowser->setAlignment(Qt::AlignRight);
            }else{
                ui->textBrowser->setPlainText("0");
                ui->textBrowser->setAlignment(Qt::AlignRight);
            }
        }
    }else{
        inputValue_1.clear();
        if(!inputValue_1.isEmpty()){
            inputValue_1.push_back(out);
            ui->textBrowser->setPlainText(inputValue_1);
            ui->textBrowser->setAlignment(Qt::AlignRight);
        }else{
            ui->textBrowser->setPlainText("0");
            ui->textBrowser->setAlignment(Qt::AlignRight);
        }
        Done = false;
    }

}

void CoolPlayer::on_Cal_dot_clicked()
{
    QString out = ".";
    getInputValue(out);
}



void CoolPlayer::on_Cal_add_clicked()
{
    if(!inputValue_2.isEmpty()){
        on_Cal_calculate_clicked();
        Done = false;
    }
    inputValue_2.clear();
    firstDone = true;
    sign = "+";
}


void CoolPlayer::on_Cal_minus_clicked()
{
    if(!inputValue_2.isEmpty()){
        on_Cal_calculate_clicked();
        Done = false;
    }
    inputValue_2.clear();
    firstDone = true;
    sign = "-";
}

void CoolPlayer::on_Cal_times_clicked()
{
    if(!inputValue_2.isEmpty()){
        on_Cal_calculate_clicked();
        Done = false;
    }
    inputValue_2.clear();
    firstDone = true;
    sign = "*";
}

void CoolPlayer::on_Cal_divide_clicked()
{
    if(!inputValue_2.isEmpty()){
        on_Cal_calculate_clicked();
        Done = false;
    }
    inputValue_2.clear();
    firstDone = true;
    sign = "/";
}

void CoolPlayer::on_Cal_sqrt_clicked()
{
    firstDone = true;
    bool ok;
    inputValue_1 = QString::number(qSqrt(inputValue_1.toFloat(&ok)));
    ui->textBrowser->setPlainText(inputValue_1);
    ui->textBrowser->setAlignment(Qt::AlignRight);
}

void CoolPlayer::on_Cal_1x_clicked()
{
    firstDone = true;
    bool ok;
    inputValue_1 = QString::number(1/inputValue_1.toFloat(&ok));
    ui->textBrowser->setPlainText(inputValue_1);
    ui->textBrowser->setAlignment(Qt::AlignRight);
}

void CoolPlayer::on_Cal_percentage_clicked()
{
    firstDone = true;
    bool ok;
    inputValue_1 = QString::number(0.01*inputValue_1.toFloat(&ok));
    ui->textBrowser->setPlainText(inputValue_1);
    ui->textBrowser->setAlignment(Qt::AlignRight);
}

void CoolPlayer::on_Cal_calculate_clicked()
{
    bool ok;
    float_t value_1 = inputValue_1.toFloat(&ok);
    float_t value_2 = inputValue_2.toFloat(&ok);
    float_t ans = 0;
    if(sign == "+") {
        ans = value_1 + value_2;
    }else if (sign == "-"){
        ans = value_1 - value_2;
    }else if (sign == "*"){
        ans = value_1 * value_2;
    }else if (sign == "/"){
        ans = value_1 / value_2;
    }

    ui->textBrowser->setPlainText(QString::number(ans));
    ui->textBrowser->setAlignment(Qt::AlignRight);
    inputValue_1.clear();
    inputValue_2.clear();
    inputValue_1.push_back(QString::number(ans));
    firstDone = false;
    Done = true;
}


void CoolPlayer::on_Cal_cr_clicked()
{
    inputValue_1.clear();
    inputValue_2.clear();
    ui->textBrowser->setPlainText("0");
    ui->textBrowser->setAlignment(Qt::AlignRight);
}

void CoolPlayer::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_0){
        on_Cal_0_clicked();
    }else if(event->key() == Qt::Key_1){
        on_Cal_1_clicked();
    }else if(event->key() == Qt::Key_2){
        on_Cal_2_clicked();
    }else if(event->key() == Qt::Key_3){
        on_Cal_3_clicked();
    }else if(event->key() == Qt::Key_4){
        on_Cal_4_clicked();
    }else if(event->key() == Qt::Key_5){
        on_Cal_5_clicked();
    }else if(event->key() == Qt::Key_6){
        on_Cal_6_clicked();
    }else if(event->key() == Qt::Key_7){
        on_Cal_7_clicked();
    }else if(event->key() == Qt::Key_8){
        on_Cal_8_clicked();
    }else if(event->key() == Qt::Key_9){
        on_Cal_9_clicked();
    }else if(event->key() == Qt::Key_Period){
        on_Cal_dot_clicked();
    }else if(event->key() == Qt::Key_Plus){
        on_Cal_add_clicked();
    }else if(event->key() == Qt::Key_Minus){
        on_Cal_minus_clicked();
    }else if(event->key() == Qt::Key_Asterisk){
        on_Cal_times_clicked();
    }else if(event->key() == Qt::Key_Slash){
        on_Cal_divide_clicked();
    }else if(event->key() == Qt::Key_Enter){
        on_Cal_calculate_clicked();
    }

}






















