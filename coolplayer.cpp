#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QString>
#include <QtMath>
#include "coolplayer.h"
#include "ui_coolplayer.h"


CoolPlayer::CoolPlayer(QWidget *parent):QWidget(parent),ui(new Ui::CoolPlayer)
{
    ui->setupUi(this);

    ui->textEdit->setPlainText("0");
    ui->textEdit->setAlignment(Qt::AlignRight);
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
        ui->textEdit->setAlignment(Qt::AlignRight);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }
}

void CoolPlayer::on_Cal_2_clicked()
{
    int i = 2;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }
}

void CoolPlayer::on_Cal_3_clicked()
{
    int i = 3;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }
}

void CoolPlayer::on_Cal_4_clicked()
{
    int i = 4;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }
}

void CoolPlayer::on_Cal_5_clicked()
{
    int i = 5;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }
}

void CoolPlayer::on_Cal_6_clicked()
{
    int i = 6;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }
}

void CoolPlayer::on_Cal_7_clicked()
{
    int i = 7;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }
}

void CoolPlayer::on_Cal_8_clicked()
{
    int i = 8;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }
}

void CoolPlayer::on_Cal_9_clicked()
{
    int i = 9;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }
}

void CoolPlayer::on_Cal_0_clicked()
{
    int i = 0;
    QString out = QString::number(i);
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }
}

void CoolPlayer::on_Cal_dot_clicked()
{
    QString out = ".";
    if(!firstDone) {
        inputValue_1.push_back(out);
        ui->textEdit->setPlainText(inputValue_1);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }else{
        inputValue_2.push_back(out);
        ui->textEdit->setPlainText(inputValue_2);
        ui->textEdit->setAlignment(Qt::AlignRight);
    }
}



void CoolPlayer::on_Cal_add_clicked()
{
    if(!inputValue_2.isEmpty()) on_Cal_calculate_clicked();
    inputValue_2.clear();
    firstDone = true;
    sign = "+";
}


void CoolPlayer::on_Cal_minus_clicked()
{
    if(!inputValue_2.isEmpty()) on_Cal_calculate_clicked();
    inputValue_2.clear();
    firstDone = true;
    sign = "-";
}

void CoolPlayer::on_Cal_times_clicked()
{
    if(!inputValue_2.isEmpty()) on_Cal_calculate_clicked();
    inputValue_2.clear();
    firstDone = true;
    sign = "*";
}

void CoolPlayer::on_Cal_divide_clicked()
{
    if(!inputValue_2.isEmpty()) on_Cal_calculate_clicked();
    inputValue_2.clear();
    firstDone = true;
    sign = "/";
}

void CoolPlayer::on_Cal_sqrt_clicked()
{
    firstDone = true;
    bool ok;
    inputValue_1 = QString::number(qSqrt(inputValue_1.toFloat(&ok)));
    ui->textEdit->setPlainText(inputValue_1);
    ui->textEdit->setAlignment(Qt::AlignRight);
}

void CoolPlayer::on_Cal_1x_clicked()
{
    firstDone = true;
    bool ok;
    inputValue_1 = QString::number(1/inputValue_1.toFloat(&ok));
    ui->textEdit->setPlainText(inputValue_1);
    ui->textEdit->setAlignment(Qt::AlignRight);
}

void CoolPlayer::on_Cal_percentage_clicked()
{
    firstDone = true;
    bool ok;
    inputValue_1 = QString::number(0.01*inputValue_1.toFloat(&ok));
    ui->textEdit->setPlainText(inputValue_1);
    ui->textEdit->setAlignment(Qt::AlignRight);
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

    ui->textEdit->setPlainText(QString::number(ans));
    ui->textEdit->setAlignment(Qt::AlignRight);
    inputValue_1.clear();
    inputValue_2.clear();
    inputValue_1.push_back(QString::number(ans));
    firstDone = false;
}


void CoolPlayer::on_Cal_cr_clicked()
{
    inputValue_1.clear();
    inputValue_2.clear();
    ui->textEdit->setPlainText("0");
    ui->textEdit->setAlignment(Qt::AlignRight);
}


