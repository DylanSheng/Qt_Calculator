#ifndef COOLPLAYER_H
#define COOLPLAYER_H

#include <QWidget>

namespace Ui {
class CoolPlayer;   //group classes together
}

class CoolPlayer : public QWidget
{
    Q_OBJECT

public:
    explicit CoolPlayer(QWidget *parent = 0);  //constructor //has no parent
    ~CoolPlayer();  //deconstructor

protected:
    void keyPressEvent(QKeyEvent *event);
    void getInputValue(QString out);
private slots:  
    void on_Cal_1_clicked();
    void on_Cal_2_clicked();
    void on_Cal_3_clicked();
    void on_Cal_4_clicked();
    void on_Cal_5_clicked();
    void on_Cal_6_clicked();
    void on_Cal_7_clicked();
    void on_Cal_8_clicked();
    void on_Cal_9_clicked();
    void on_Cal_0_clicked();
    void on_Cal_calculate_clicked();
    void on_Cal_add_clicked();
    void on_Cal_minus_clicked();

    void on_Cal_times_clicked();

    void on_Cal_divide_clicked();

    void on_Cal_dot_clicked();

    void on_Cal_cr_clicked();

    void on_Cal_sqrt_clicked();

    void on_Cal_1x_clicked();

    void on_Cal_percentage_clicked();

private:
    Ui::CoolPlayer *ui; //overall interface
    QString inputValue_1;
    QString inputValue_2;
    QString sign;

    bool firstDone = false;
    bool Done = false;

    void getTextFile();
};

#endif // COOLPLAYER_H
