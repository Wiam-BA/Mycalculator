#include "mycalculator.h"
#include "./ui_mycalculator.h"

MyCalculator::MyCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyCalculator)
    , m_storedValue("") // Initialize the new member variable with an empty string
    , m_firstOperand(0.0) // Stores the first number of the operation
    , m_pendingOperator("") // Stores the operator (+, -, etc.)
    , m_isWaitingForSecondOperand(false) // State flag
    , secondOperand(0.0)
    , result(0.0)
    , m_pending("")

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

        if (clickedButton->text()== "." && m_storedValue.length() == 0)
        {
            m_storedValue ="0";
        }
        // Instead of a switch, we directly use the button's text
        m_storedValue += clickedButton->text();

        // Display the stored value in the plainTextEdit widget
        ui->plainTextEdit->setPlainText(m_storedValue);
    }
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
    // Take the current displayed value, convert it to a float, and use it as the second operand
    // Perform the operation based on the stored operator.
    if (m_pendingOperator == "+" && m_pending != "2nd")
    {
        secondOperand = m_storedValue.toFloat();
        result = m_firstOperand + secondOperand;
    }
    else if (m_pendingOperator == "-" && m_pending != "2nd")
    {
        secondOperand = m_storedValue.toFloat();
        result = m_firstOperand - secondOperand;
    }
    else if (m_pendingOperator == "*" && m_pending != "2nd")
    {
        result = m_firstOperand * secondOperand;
    }
    else if (m_pendingOperator == "/" && m_pending != "2nd")
    {
        if (secondOperand != 0)
        {
            result = m_firstOperand / secondOperand;
        }
    }
    else if (m_pendingOperator == "%" && m_pending != "2nd")
    {
        secondOperand = 1.0;
        result = m_firstOperand/100;
    }
    else if ( m_pending == "2nd")
    {

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
        else if ( m_pendingOperator == "/")
        {
            if (secondOperand != 0)
            {
                result = m_firstOperand / secondOperand;
            }
        }
        else if ( m_pendingOperator == "%")
        {
            secondOperand = 1.0;
            result = m_firstOperand/100;
        }
    }

    else
    {
        QMessageBox::warning(this, "Error", "Wtf are u doing");
        return;
    }

    // Display the result
    m_storedValue = QString::number(result);
    ui->plainTextEdit->setPlainText(m_storedValue);
    m_isWaitingForSecondOperand = false;
    m_pending = "2nd";
}

    void MyCalculator::del_button_clicked()
{
    m_storedValue = "";
    m_firstOperand = 0.0;
    m_pendingOperator = "";
    m_isWaitingForSecondOperand = false;
    ui->plainTextEdit->setPlainText(m_storedValue);
    m_pending = "";
}

    void MyCalculator::del3_button_clicked()
{
    m_storedValue.remove(m_storedValue.length()-1,1);
    ui->plainTextEdit->setPlainText(m_storedValue);
}

    void MyCalculator::del1_button_clicked()
{
    m_storedValue.clear();
    ui->plainTextEdit->setPlainText(m_storedValue);
    m_pending = "";
}

