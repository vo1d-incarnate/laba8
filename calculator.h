#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

using namespace std;

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_zero_button_clicked();

    void on_one_button_clicked();

    void on_two_button_clicked();

    void on_three_button_clicked();

    void on_four_button_clicked();

    void on_five_button_clicked();

    void on_six_button_clicked();

    void on_seven_button_clicked();

    void on_eight_button_clicked();

    void on_nine_button_clicked();

    void on_plus_button_clicked();

    void on_minus_button_clicked();

    void on_multpl_button_clicked();

    void on_divide_button_clicked();

    void on_sqroot_button_clicked();

    void on_cos_button_clicked();

    void on_root_button_clicked();

    void on_lg_button_clicked();

    void on_equal_button_clicked();

    void on_remove_button_clicked();

    string defaultActions(string action, string sum);

    void on_sin_button_clicked();

    void on_tg_button_clicked();

    void on_ctg_button_clicked();

    void on_fact_button_clicked();

    void on_pow_button_clicked();

    void on_ln_button_clicked();

    void on_log2_button_clicked();

    void on_log_button_clicked();

    void on_e_button_clicked();

    float atoi(const std::string& str);

private:
    Ui::Calculator *ui;
    std::string math_sums;
};
#endif // CALCULATOR_H
