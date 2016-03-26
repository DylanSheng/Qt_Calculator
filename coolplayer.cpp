#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QString>
#include "coolplayer.h"
#include "ui_coolplayer.h"


CoolPlayer::CoolPlayer(QWidget *parent):QWidget(parent),ui(new Ui::CoolPlayer)
{
    ui->setupUi(this);

}

CoolPlayer::~CoolPlayer()
{
    delete ui;
}
void CoolPlayer::on_Cal_1_clicked()
{
    int i = 1;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
    }
}

void CoolPlayer::on_Cal_2_clicked()
{
    int i = 2;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
    }
}

void CoolPlayer::on_Cal_3_clicked()
{
    int i = 3;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
    }
}

void CoolPlayer::on_Cal_4_clicked()
{
    int i = 4;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
    }
}

void CoolPlayer::on_Cal_5_clicked()
{
    int i = 5;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
    }
}

void CoolPlayer::on_Cal_6_clicked()
{
    int i = 6;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
    }
}

void CoolPlayer::on_Cal_7_clicked()
{
    int i = 7;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
    }
}

void CoolPlayer::on_Cal_8_clicked()
{
    int i = 8;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
    }
}

void CoolPlayer::on_Cal_9_clicked()
{
    int i = 9;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
    }
}

void CoolPlayer::on_Cal_0_clicked()
{
    int i = 0;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
    }
}

void CoolPlayer::on_Cal_calculate_clicked()
{
    bool ok;
    int value_1 = inputValue_1.toInt(&ok, 10);
    int value_2 = inputValue_2.toInt(&ok, 10);
    int ans = 0;
    if(sign == "+") {
        ans = value_1 + value_2;
    }else if (sign == "-"){
        ans = value_1 - value_2;
    }else if (sign == "*"){
        ans = value_1 * value_2;
    }else if (sign == "/"){
        ans = value_1 / value_2;
    }

    ui->textEdit->setPlainText(QString::number(ans));
    inputValue_1.clear();
    inputValue_2.clear();
    firstDone = false;
}

void CoolPlayer::on_Cal_clear_clicked()
{
    CoolPlayer::ansg = 0;
    QString ansout = QString::number(ansg);
    ui->textEdit->setPlainText(ansout);
}

void CoolPlayer::on_Cal_add_clicked()
{
    firstDone = true;
    sign = "+";
}


void CoolPlayer::on_Cal_minus_clicked()
{
    firstDone = true;
    sign = "-";
}

void CoolPlayer::on_Cal_times_clicked()
{
    firstDone = true;
    sign = "*";
}

void CoolPlayer::on_Cal_divide_clicked()
{
    firstDone = true;
    sign = "/";
}
