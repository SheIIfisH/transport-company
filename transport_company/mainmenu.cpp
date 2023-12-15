#include <iostream>
#include <string>
#include "mainmenu.h"
#include "premisesrow.h"
#include "employeerow.h"
#include "transportrow.h"
#include "orderrow.h"
#include "expenserow.h"
#include "reportscreen.h"

using namespace std;

/////////////Premises//////////////
uint8_t MainMenu::showPremises()
{
    char choice = 0;
    while(choice != 'q')
    {
        choice = 0;
        if(m_premisesTable.getRowCount() == 0)
        {
            cout << "---no data available---" << endl;
            cout << endl;
            cout << "Select the desired action option:" << endl;
            cout << "a - add new premise"   << endl;
            cout << "q - quit to main menu" << endl;
            cout << endl;

            cout << ">> ";
            cin >> choice;
            cout << endl;
        }
        else
        {
            m_premisesTable.showRows();
            cout << endl;
            cout << "Select the desired action option:" << endl;
            cout << "a - add new premise"   << endl;
            cout << "e - edit premise"      << endl;
            cout << "d - delete premise"    << endl;
            cout << "q - quit to main menu" << endl;
            cout << endl;

            cout << ">> ";
            cin >> choice;
            cout << endl;

            switch(choice)
            {
            case 'e':
                editPremise();
                break;
            case 'd':
                deletePremise();
                break;
            }
        }

        switch(choice)
        {
        case 'a':
            addPremise();
            break;
        case 'e':
        case 'd':
        case 'q':
            break;
        default:
            cout << "Invalid input" << endl;
        }
    }
    return 0;
}

uint8_t MainMenu::addPremise()
{
    string name, address, type;
    cout << "Enter the details" << endl;
    cout << "Title >> ";
    cin >> name;
    cout << "Address >> ";
    cin >> address;
    cout << "Type >> ";
    cin >> type;
    cout << endl;

    m_premisesTable.newRow(new PremisesRow(name, address, type));
    cout << "A new premise has been added." << endl;
    cout << endl;
    return 0;
}

uint8_t MainMenu::editPremise()
{
    uint16_t id{0};
    cout << "Choose a line to edit (N) >> ";
    cin >> id;
    cout << endl;

    PremisesRow* lineForEdit = (PremisesRow*) m_premisesTable.getRow(id);
    if(!lineForEdit)
    {
        cout << "An error occurred while editing" << endl;
        cout << endl;
        return 1;
    }
    lineForEdit->show();
    cout << endl;

    string name, address, type;
    cout << "Enter the details" << endl;
    cout << "Title >> ";
    cin >> name;
    cout << "Address >> ";
    cin >> address;
    cout << "Type >> ";
    cin >> type;
    cout << endl;

    uint16_t status = m_premisesTable.editRow(id, new PremisesRow(name, address, type));
    if(status == 0)
    {
        cout << "Premise has been edited." << endl;
        cout << endl;
        return 0;
    }
    else
    {
        cout << "An error occurred while editing." << endl;
        cout << endl;
        return 1;
    }
    return 0;
}

uint8_t MainMenu::deletePremise()
{
    uint16_t id{0};
    cout << "Choose a line to edit (N) >> ";
    cin >> id;
    cout << endl;

    PremisesRow* lineForDelete = (PremisesRow*) m_premisesTable.getRow(id);
    if(!lineForDelete)
    {
        cout << "An error occurred while deleting." << endl;
        cout << endl;
        return 2;
    }
    lineForDelete->show();
    cout << endl;

    char choice = 0;
    cout << "Are you sure you want to delete this line? (Y/N) >> ";
    cin >> choice;
    cout << endl;

    if(choice == 'Y' || choice == 'y')
    {
        m_premisesTable.deleteRow(id);
        cout << "Premise has been deleted." << endl;
        cout << endl;
        return 0;
    }
    else
    {
        cout << "Deletion canceled." << endl;
        cout << endl;
        return 1;
    }
}

/////////////Employees//////////////
uint8_t MainMenu::showEmployees()
{
    char choice = 0;
    while(choice != 'q')
    {
        choice = 0;
        if(m_employeeTable.getRowCount() == 0)
        {
            cout << "---no data available---" << endl;
            cout << endl;
            cout << "Select the desired action option:" << endl;
            cout << "a - add new employee"   << endl;
            cout << "q - quit to main menu" << endl;
            cout << endl;

            cout << ">> ";
            cin >> choice;
            cout << endl;
        }
        else
        {
            m_employeeTable.showRows();
            cout << endl;
            cout << "Select the desired action option:" << endl;
            cout << "a - add new employee"   << endl;
            cout << "e - edit employee"      << endl;
            cout << "d - delete employee"    << endl;
            cout << "q - quit to main menu" << endl;
            cout << endl;

            cout << ">> ";
            cin >> choice;
            cout << endl;

            switch(choice)
            {
            case 'e':
                editEmployee();
                break;
            case 'd':
                deleteEmployee();
                break;
            }
        }

        switch(choice)
        {
        case 'a':
            addEmployee();
            break;
        case 'e':
        case 'd':
        case 'q':
            break;
        default:
            cout << "Invalid input" << endl;
        }
    }
    return 0;
}

uint8_t MainMenu::addEmployee()
{
    string fio, position, workplace;
    cout << "Enter the details" << endl;
    cout << "FIO >> ";
    cin >> fio;
    cout << "Position >> ";
    cin >> position;
    cout << "Workplace >> ";
    cin >> workplace;
    cout << endl;

    m_employeeTable.newRow(new EmployeeRow(fio, position, workplace));
    cout << "A new employee has been added." << endl;
    cout << endl;
    return 0;
}

uint8_t MainMenu::editEmployee()
{
    uint16_t id{0};
    cout << "Choose a line to edit (N) >> ";
    cin >> id;
    cout << endl;

    EmployeeRow* lineForEdit = (EmployeeRow*) m_employeeTable.getRow(id);
    if(!lineForEdit)
    {
        cout << "An error occurred while editing" << endl;
        cout << endl;
        return 1;
    }
    lineForEdit->show();
    cout << endl;

    string fio, position, workplace;
    cout << "Enter the details" << endl;
    cout << "FIO >> ";
    cin >> fio;
    cout << "Position >> ";
    cin >> position;
    cout << "Workplace >> ";
    cin >> workplace;
    cout << endl;

    uint16_t status = m_employeeTable.editRow(id, new EmployeeRow(fio, position, workplace));
    if(status == 0)
    {
        cout << "Employee has been edited." << endl;
        cout << endl;
        return 0;
    }
    else
    {
        cout << "An error occurred while editing." << endl;
        cout << endl;
        return 1;
    }
    return 0;
}

uint8_t MainMenu::deleteEmployee()
{
    uint16_t id{0};
    cout << "Choose a line to edit (N) >> ";
    cin >> id;
    cout << endl;

    EmployeeRow* lineForDelete = (EmployeeRow*) m_employeeTable.getRow(id);
    if(!lineForDelete)
    {
        cout << "An error occurred while deleting." << endl;
        cout << endl;
        return 2;
    }
    lineForDelete->show();
    cout << endl;

    char choice = 0;
    cout << "Are you sure you want to delete this line? (Y/N) >> ";
    cin >> choice;
    cout << endl;

    if(choice == 'Y' || choice == 'y')
    {
        m_employeeTable.deleteRow(id);
        cout << "Employee has been deleted." << endl;
        cout << endl;
        return 0;
    }
    else
    {
        cout << "Deletion canceled." << endl;
        cout << endl;
        return 1;
    }
}

/////////////Transport//////////////
uint8_t MainMenu::showTransport()
{
    char choice = 0;
    while(choice != 'q')
    {
        choice = 0;
        if(m_transportTable.getRowCount() == 0)
        {
            cout << "---no data available---" << endl;
            cout << endl;
            cout << "Select the desired action option:" << endl;
            cout << "a - add new transport"   << endl;
            cout << "q - quit to main menu" << endl;
            cout << endl;

            cout << ">> ";
            cin >> choice;
            cout << endl;
        }
        else
        {
            m_transportTable.showRows();
            cout << endl;
            cout << "Select the desired action option:" << endl;
            cout << "a - add new transport"   << endl;
            cout << "e - edit transport"      << endl;
            cout << "d - delete transport"    << endl;
            cout << "q - quit to main menu" << endl;
            cout << endl;

            cout << ">> ";
            cin >> choice;
            cout << endl;

            switch(choice)
            {
            case 'e':
                editTransport();
                break;
            case 'd':
                deleteTransport();
                break;
            }
        }

        switch(choice)
        {
        case 'a':
            addTransport();
            break;
        case 'e':
        case 'd':
        case 'q':
            break;
        default:
            cout << "Invalid input" << endl;
        }
    }
    return 0;
}

uint8_t MainMenu::addTransport()
{
    char choice = 0;

    uint16_t number;
    string driver;
    uint32_t payload;
    TechStatus_t techCond;
    cout << "Enter the details" << endl;
    cout << "Number >> ";
    cin >> number;
    cout << "Driver >> ";
    cin >> driver;
    cout << "Payload >> ";
    cin >> payload;
    cout << "Techical condition:" << endl;
    cout << "1 - operable" << endl;
    cout << "2 - maintenance required" << endl;
    cout << "3 - repair required" << endl;
    cout << "4 - repair need" << endl;
    cout << endl;
    cout << ">> ";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
    case '1':
        techCond = operable;
        break;
    case '2':
        techCond = mtrequired;
        break;
    case '3':
        techCond = rprequired;
        break;
    case '4':
        techCond = rpneed;
        break;
    default:
        techCond = operable;
    }

    m_transportTable.newRow(new TransportRow(number, driver, payload, techCond));
    cout << "A new transport has been added." << endl;
    cout << endl;
    return 0;
}

uint8_t MainMenu::editTransport()
{
    uint16_t id{0};
    cout << "Choose a line to edit (N) >> ";
    cin >> id;
    cout << endl;

    TransportRow* lineForEdit = (TransportRow*) m_transportTable.getRow(id);
    if(!lineForEdit)
    {
        cout << "An error occurred while editing" << endl;
        cout << endl;
        return 1;
    }
    lineForEdit->show();
    cout << endl;

    char choice;
    uint16_t number;
    string driver;
    uint32_t payload;
    TechStatus_t techCond;

    cout << "Enter the details" << endl;
    cout << "Number >> ";
    cin >> number;
    cout << "Driver >> ";
    cin >> driver;
    cout << "Payload >> ";
    cin >> payload;
    cout << "Techical condition:" << endl;
    cout << "1 - operable" << endl;
    cout << "2 - maintenance required" << endl;
    cout << "3 - repair required" << endl;
    cout << "4 - repair need" << endl;
    cout << endl;
    cout << ">> ";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
    case '1':
        techCond = operable;
        break;
    case '2':
        techCond = mtrequired;
        break;
    case '3':
        techCond = rprequired;
        break;
    case '4':
        techCond = rpneed;
        break;
    default:
        techCond = operable;
    }

    uint16_t status = m_transportTable.editRow(id, new TransportRow(number, driver, payload, techCond));
    if(status == 0)
    {
        cout << "TransportT has been edited." << endl;
        cout << endl;
        return 0;
    }
    else
    {
        cout << "An error occurred while editing." << endl;
        cout << endl;
        return 1;
    }
    return 0;
}

uint8_t MainMenu::deleteTransport()
{
    uint16_t id{0};
    cout << "Choose a line to edit (N) >> ";
    cin >> id;
    cout << endl;

    TransportRow* lineForDelete = (TransportRow*) m_transportTable.getRow(id);
    if(!lineForDelete)
    {
        cout << "An error occurred while deleting." << endl;
        cout << endl;
        return 2;
    }
    lineForDelete->show();
    cout << endl;

    char choice = 0;
    cout << "Are you sure you want to delete this line? (Y/N) >> ";
    cin >> choice;
    cout << endl;

    if(choice == 'Y' || choice == 'y')
    {
        m_transportTable.deleteRow(id);
        cout << "Transport has been deleted." << endl;
        cout << endl;
        return 0;
    }
    else
    {
        cout << "Deletion canceled." << endl;
        cout << endl;
        return 1;
    }
}

/////////////Orders//////////////
uint8_t MainMenu::showOrders()
{
    char choice = 0;
    while(choice != 'q')
    {
        choice = 0;
        if(m_orderTable.getRowCount() == 0)
        {
            cout << "---no data available---" << endl;
            cout << endl;
            cout << "Select the desired action option:" << endl;
            cout << "a - add new order"   << endl;
            cout << "q - quit to main menu" << endl;
            cout << endl;

            cout << ">> ";
            cin >> choice;
            cout << endl;
        }
        else
        {
            m_orderTable.showRows();
            cout << endl;
            cout << "Select the desired action option:" << endl;
            cout << "a - add new order"   << endl;
            cout << "e - edit order"      << endl;
            cout << "d - delete order"    << endl;
            cout << "q - quit to main menu" << endl;
            cout << endl;

            cout << ">> ";
            cin >> choice;
            cout << endl;

            switch(choice)
            {
            case 'e':
                editOrder();
                break;
            case 'd':
                deleteOrder();
                break;
            }
        }

        switch(choice)
        {
        case 'a':
            addOrder();
            break;
        case 'e':
        case 'd':
        case 'q':
            break;
        default:
            cout << "Invalid input" << endl;
        }
    }
    return 0;
}

uint8_t MainMenu::addOrder()
{
    uint16_t number, weight;
    string client, addressFrom, addressTo, status;
    uint64_t payment;
    cout << "Enter the details" << endl;
    cout << "Number >> ";
    cin >> number;
    cout << "Client >> ";
    cin >> client;
    cout << "Weight >> ";
    cin >> weight;
    cout << "Address from >> ";
    cin >> addressFrom;
    cout << "Address to >> ";
    cin >> addressTo;
    cout << "Status >> ";
    cin >> status;
    cout << "Payment >> ";
    cin >> payment;
    cout << endl;

    m_orderTable.newRow(new OrderRow(number, weight, client, addressFrom, addressTo, status, payment));
    cout << "A new order has been added." << endl;
    cout << endl;
    return 0;
}

uint8_t MainMenu::editOrder()
{
    uint16_t id{0};
    cout << "Choose a line to edit (N) >> ";
    cin >> id;
    cout << endl;

    OrderRow* lineForEdit = (OrderRow*) m_orderTable.getRow(id);
    if(!lineForEdit)
    {
        cout << "An error occurred while editing" << endl;
        cout << endl;
        return 1;
    }
    lineForEdit->show();
    cout << endl;

    uint16_t number, weight;
    string client, addressFrom, addressTo, status;
    uint64_t payment;
    cout << "Enter the details" << endl;
    cout << "Number >> ";
    cin >> number;
    cout << "Client >> ";
    cin >> client;
    cout << "Weight >> ";
    cin >> weight;
    cout << "Address from >> ";
    cin >> addressFrom;
    cout << "Address to >> ";
    cin >> addressTo;
    cout << "Status >> ";
    cin >> status;
    cout << "Payment >> ";
    cin >> payment;
    cout << endl;

    uint16_t res = m_orderTable.editRow(id, new OrderRow(number, weight, client, addressFrom, addressTo, status, payment));

    if(res == 0)
    {
        cout << "Order has been edited." << endl;
        cout << endl;
        return 0;
    }
    else
    {
        cout << "An error occurred while editing." << endl;
        cout << endl;
        return 1;
    }
    return 0;
}

uint8_t MainMenu::deleteOrder()
{
    uint16_t id{0};
    cout << "Choose a line to edit (N) >> ";
    cin >> id;
    cout << endl;

    OrderRow* lineForDelete = (OrderRow*) m_orderTable.getRow(id);
    if(!lineForDelete)
    {
        cout << "An error occurred while deleting." << endl;
        cout << endl;
        return 2;
    }
    lineForDelete->show();
    cout << endl;

    char choice = 0;
    cout << "Are you sure you want to delete this line? (Y/N) >> ";
    cin >> choice;
    cout << endl;

    if(choice == 'Y' || choice == 'y')
    {
        m_orderTable.deleteRow(id);
        cout << "Order has been deleted." << endl;
        cout << endl;
        return 0;
    }
    else
    {
        cout << "Deletion canceled." << endl;
        cout << endl;
        return 1;
    }
}

/////////////Expenses//////////////
uint8_t MainMenu::showExpenses()
{
    char choice = 0;
    while(choice != 'q')
    {
        choice = 0;
        if(m_expenseTable.getRowCount() == 0)
        {
            cout << "---no data available---" << endl;
            cout << endl;
            cout << "Select the desired action option:" << endl;
            cout << "a - add new expenses"   << endl;
            cout << "q - quit to main menu" << endl;
            cout << endl;

            cout << ">> ";
            cin >> choice;
            cout << endl;
        }
        else
        {
            m_expenseTable.showRows();
            cout << endl;
            cout << "Select the desired action option:" << endl;
            cout << "a - add new expenses"  << endl;
            cout << "e - edit expenses"     << endl;
            cout << "d - delete expenses"   << endl;
            cout << "q - quit to main menu" << endl;
            cout << endl;

            cout << ">> ";
            cin >> choice;
            cout << endl;

            switch(choice)
            {
            case 'e':
                editExpenses();
                break;
            case 'd':
                deleteExpenses();
                break;
            }
        }

        switch(choice)
        {
        case 'a':
            addExpenses();
            break;
        case 'e':
        case 'd':
        case 'q':
            break;
        default:
            cout << "Invalid input" << endl;
        }
    }
    return 0;
}

uint8_t MainMenu::addExpenses()
{
    std::string recipient, date, category;
    uint64_t payment;
    cout << "Enter the details" << endl;
    cout << "Recipient >> ";
    cin >> recipient;
    cout << "Date >> ";
    cin >> date;
    cout << "Category >> ";
    cin >> category;
    cout << "Payment >> ";
    cin >> payment;
    cout << endl;

    m_expenseTable.newRow(new ExpenseRow(recipient, date, category, payment));
    cout << "A new expense has been added." << endl;
    cout << endl;
    return 0;
}

uint8_t MainMenu::editExpenses()
{
    uint16_t id{0};
    cout << "Choose a line to edit (N) >> ";
    cin >> id;
    cout << endl;

    ExpenseRow* lineForEdit = (ExpenseRow*) m_expenseTable.getRow(id);
    if(!lineForEdit)
    {
        cout << "An error occurred while editing" << endl;
        cout << endl;
        return 1;
    }
    lineForEdit->show();
    cout << endl;

    std::string recipient, date, category;
    uint64_t payment;
    cout << "Enter the details" << endl;
    cout << "Recipient >> ";
    cin >> recipient;
    cout << "Date >> ";
    cin >> date;
    cout << "Category >> ";
    cin >> category;
    cout << "Payment >> ";
    cin >> payment;
    cout << endl;

    uint16_t status = m_expenseTable.editRow(id, new ExpenseRow(recipient, date, category, payment));
    if(status == 0)
    {
        cout << "Expence has been edited." << endl;
        cout << endl;
        return 0;
    }
    else
    {
        cout << "An error occurred while editing." << endl;
        cout << endl;
        return 1;
    }
    return 0;
}

uint8_t MainMenu::deleteExpenses()
{
    uint16_t id{0};
    cout << "Choose a line to edit (N) >> ";
    cin >> id;
    cout << endl;

    ExpenseRow* lineForDelete = (ExpenseRow*) m_expenseTable.getRow(id);
    if(!lineForDelete)
    {
        cout << "An error occurred while deleting." << endl;
        cout << endl;
        return 2;
    }
    lineForDelete->show();
    cout << endl;

    char choice = 0;
    cout << "Are you sure you want to delete this line? (Y/N) >> ";
    cin >> choice;
    cout << endl;

    if(choice == 'Y' || choice == 'y')
    {
        m_expenseTable.deleteRow(id);
        cout << "Expense has been deleted." << endl;
        cout << endl;
        return 0;
    }
    else
    {
        cout << "Deletion canceled." << endl;
        cout << endl;
        return 1;
    }
}

/////////////Report//////////////
uint8_t MainMenu::createReport()
{
    return 0;
}


void MainMenu::interact()
{
    char choice = 0;

    while(choice != 'q')
    {
        choice = 0;

        cout << "Select the desired action option:" << endl;
        cout << "p - show premises"  << endl;
        cout << "e - show employees" << endl;
        cout << "t - show transport" << endl;
        cout << "o - show orders"    << endl;
        cout << "x - show expenses"  << endl;
        cout << "r - create report"  << endl;
        cout << "q - quit program"   << endl;
        cout << endl;

        cout << ">> ";
        cin >> choice;
        cout << endl;

        switch(choice)
        {
        case 'p':
            showPremises();
            break;
        case 'e':
            showEmployees();
            break;
        case 't':
            showTransport();
            break;
        case 'o':
            showOrders();
            break;
        case 'x':
            showExpenses();
            break;
        case 'r':
            createReport();
            break;
        case 'q':
            break;
        default:
            cout << "Invalid input" << endl;
        }
    }

}
