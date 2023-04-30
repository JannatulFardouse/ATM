#include <iostream>
using namespace std;

void showMenu()
{
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
}

int main()
{

    int option;
    double balance = 500;

    do
    {
        showMenu();
        cout << "Please select your option: " << endl;
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
            cout << "Balance is " << balance << " $" << endl;
            break;
        case 2:
            cout << "Deposit amount: " << endl;
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:
            cout << "Withdraw amount: " << endl;
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
            {
                balance -= withdrawAmount;
            }
            else
            {
                cout << "Not enough money!";
            }
            break;
        }
    } while (option != 4);
    return 0;
}