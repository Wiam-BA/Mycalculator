#ifndef MYCALCULATOR_H
#define MYCALCULATOR_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MyCalculator;
}
QT_END_NAMESPACE

class MyCalculator : public QMainWindow
{
    Q_OBJECT

public:
    MyCalculator(QWidget *parent = nullptr);
    ~MyCalculator();

private:
    Ui::MyCalculator *ui;
    QString m_storedValue; // QString to store a string value.
    QString m_storedValue1;
    float m_firstOperand; // Stores the first number of the operation
    QString m_pendingOperator; // Stores the operator (+, -, etc.)
    bool m_isWaitingForSecondOperand;// State flag
    float secondOperand;
    float result;
    QString m_pending;


private slots:
    void number_button_clicked();
    void operator_button_clicked();
    void equals_button_clicked();
    void del_button_clicked();
    void del3_button_clicked();
    void del1_button_clicked();
};
#endif // MYCALCULATOR_H
