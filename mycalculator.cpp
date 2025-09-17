#include "mycalculator.h"
#include "./ui_mycalculator.h"

MyCalculator::MyCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyCalculator)
    , m_storedValue("") // Initialize the new member variable with an empty string
    , m_storedValue1 ("")
    , m_firstOperand(0.0) // Stores the first number of the operation
    , m_pendingOperator("") // Stores the operator (+, -, etc.)
    , m_isWaitingForSecondOperand(false) // State flag
    , secondOperand(0.0) // Stores the second number of the operation
    , result(0.0) // Stores the result of the operation
    , m_pending("") // State flag to check that we cliqued the "=" button more than once

{
    ui->setupUi(this);

    // Instead of manually connecting each button, we can find them and
    // connect them in a loop. This is much more scalable
    QList<QPushButton*> allButtons = this->findChildren<QPushButton*>();

    for (QPushButton* button : std::as_const(allButtons)) {
        QString buttonName = button->objectName();
        if (buttonName.startsWith("pushButton_n")) {
            connect(button, &QPushButton::clicked, this, &MyCalculator::number_button_clicked);
        } else if (buttonName.startsWith("pushButton_op")) {
            connect(button, &QPushButton::clicked, this, &MyCalculator::operator_button_clicked);
        }
        else if (buttonName.startsWith("pushButton_eq")) {
            connect(button, &QPushButton::clicked, this, &MyCalculator::equals_button_clicked);
        }
        else if (buttonName.startsWith("pushButton_del2")) {
            connect(button, &QPushButton::clicked, this, &MyCalculator::del_button_clicked);
        }
        else if (buttonName.startsWith("pushButton_del3")) {
            connect(button, &QPushButton::clicked, this, &MyCalculator::del3_button_clicked);
        }
        else if (buttonName.startsWith("pushButton_del1")) {
            connect(button, &QPushButton::clicked, this, &MyCalculator::del1_button_clicked);
        }
    }
}

MyCalculator::~MyCalculator()
{
    delete ui;
}

// This is the function (slot) that will be executed when the button is clicked
void MyCalculator::number_button_clicked()
{

    // The sender() function returns a pointer to the object that emitted the signal
    QPushButton* clickedButton = qobject_cast<QPushButton*>(sender());

    if (m_isWaitingForSecondOperand) {
        m_storedValue.clear();
        m_isWaitingForSecondOperand = false;
    }

    if (clickedButton) {

        if (clickedButton->text()== "." && m_storedValue.contains("."))
        {
            return;
        }

        if (clickedButton->text()== "." && m_storedValue.length() == 0 && (!m_storedValue.contains(".")) )
        {
            m_storedValue ="0";
        }

        m_storedValue += clickedButton->text();

        // Display the stored value in the plainTextEdit widget
        ui->plainTextEdit->setPlainText(m_storedValue);}

}


void MyCalculator::operator_button_clicked()

{
    // The sender() function returns a pointer to the object that emitted the signal
    QPushButton* clickedButton = qobject_cast<QPushButton*>(sender());
        if (clickedButton)
        {
           {
            // Take the current displayed value, convert it to a float, and store it as the first operand
            m_firstOperand = m_storedValue.toFloat();
            // Store the operator for later
            m_pendingOperator = clickedButton->text();
            // Set the flag to true, indicating we are now waiting for the second operand
            m_isWaitingForSecondOperand = true;
           }

         }
}

// This function handles the equals button click and performs the calculation
    void MyCalculator::equals_button_clicked()
{

    QPushButton* clickedButton = qobject_cast<QPushButton*>(sender());
    if (clickedButton){

    // Take the current displayed value, convert it to a float, and use it as the second operand
    // Perform the operation based on the stored operator.
    if ( m_pending != "n+2")

    { secondOperand = m_storedValue.toFloat();
    if (m_pendingOperator == "+")
    {
        //secondOperand = m_storedValue.toFloat();
        result = m_firstOperand + secondOperand;
    }
    else if (m_pendingOperator == "-")
    {
        //secondOperand = m_storedValue.toFloat();
        result = m_firstOperand - secondOperand;
    }
    else if (m_pendingOperator == "*")
    {
        //secondOperand = m_storedValue.toFloat();
        result = m_firstOperand * secondOperand;
    }
    else if (m_pendingOperator == "*/*" && m_pending != "n+2")
    {   //secondOperand = m_storedValue.toFloat();
        if (secondOperand != 0)
        {
            result = m_firstOperand / secondOperand;
        }
    }
    else if (m_pendingOperator == "%")
    {
        secondOperand = 1.0;
        result = m_firstOperand/100;
    }
    else if (m_pendingOperator == "1/x")
    {
        if (m_firstOperand !=0)
        {
        secondOperand = 1.0;
        result = 1/m_firstOperand;
        }
    }
    else if (m_pendingOperator == "X^2")
    {
        secondOperand = 1.0;
        result = m_firstOperand * m_firstOperand;
    }
    else if (m_pendingOperator == "Square Rt")
    {
        secondOperand = 1.0;
        result = sqrt(m_firstOperand);
    }
    else if (m_pendingOperator == "+/-")
    {
        secondOperand = 1.0;
        result = m_firstOperand * (-1);
    }
    else if(m_pendingOperator == "")
    {
        result = m_storedValue.toFloat();
    }
    }

    // if we click on the button "=" for more than once the logic changes
    if ( m_pending == "n+2")
    {
     secondOperand = m_storedValue.toFloat();
        if ( m_pendingOperator == "+")
        {
           m_firstOperand = result;
           result = m_firstOperand + secondOperand;
        }
        else if ( m_pendingOperator == "-")
        {
            m_firstOperand = result;
            result = m_firstOperand - secondOperand;
        }
        else if ( m_pendingOperator == "*")
        {
            m_firstOperand = result;
            result = m_firstOperand * secondOperand;
        }
        else if ( m_pendingOperator == "*/*")
       {
            if (secondOperand != 0)
            {   m_firstOperand = result;
                result = m_firstOperand / secondOperand;
            }
        }
        else if ( m_pendingOperator == "%")
        {
            m_firstOperand = result;
            //secondOperand = 1.0;
            result = m_firstOperand/100;
        }
        else if (m_pendingOperator == "1/x")
        {
            if (result !=0)
            {
                m_firstOperand = result;
                //secondOperand = 1.0;
                result = 1/m_firstOperand;
            }
        }
        else if (m_pendingOperator == "X^2")
        {   m_firstOperand = result;
            result = m_firstOperand * m_firstOperand;
        }
        else if (m_pendingOperator == "Square Rt")
        {   m_firstOperand = result;
            result = sqrt(m_firstOperand);
        }
        else if (m_pendingOperator == "+/-")
        {
            m_firstOperand = result;
            result = m_firstOperand * (-1);
        }
    }

    /*else
    {
        QMessageBox::warning(this, "Error", "Wtf are u doing");
        return;
    }*/

    // Display the result
    m_storedValue1 = QString::number(result);
    ui->plainTextEdit->setPlainText(m_storedValue1);
    m_isWaitingForSecondOperand = false;
    m_pending = "n+2";

    }
}

    // Resets everything
    void MyCalculator::del_button_clicked()
{
    m_storedValue = "";
    m_storedValue1 ="";
    m_firstOperand = 0.0;
    secondOperand = 0.0;
    m_pendingOperator = "";
    m_isWaitingForSecondOperand = false;
    ui->plainTextEdit->setPlainText(m_storedValue);
    m_pending = "";
}
    // Delets the current last char data within the string variable m_storedValue
    void MyCalculator::del3_button_clicked()
{
    if (ui->plainTextEdit->toPlainText() != m_storedValue1)
    {
    m_storedValue.remove(m_storedValue.length()-1,1);
    ui->plainTextEdit->setPlainText(m_storedValue);
    }
}
    // Delets the current value within the string variable m_storedValue
    void MyCalculator::del1_button_clicked()
{
    m_storedValue.clear();
    ui->plainTextEdit->setPlainText(m_storedValue);
    //m_pending = "";
}

