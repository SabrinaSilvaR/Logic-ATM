#include <iostream>
#include "function.h"
using namespace std;

 void atm() {

    int userOption;
    int currentBalance = 10000;

    while (true) {
        cout << "Welcome to electronic checkbook" << endl;
        cout << "Check balance: press 1" << endl;
        cout << "Withdrawals: press 2" << endl;
        cout << "Deposit money: press 3" << endl;
        cout << "Exit the program: press 4" << endl;
        cin >> userOption;

        switch (userOption) {
            case 1: {
                cout << "Your current balance is: " << currentBalance << endl;
                break;
            }
            case 2: {
                int withdrawal;
                cout << "Enter the amount you want to withdraw" << endl;
                cin >> withdrawal;

                if (withdrawal <= 0) {
                    cout << "Please enter a valid amount to withdraw" << endl;
                } else if (withdrawal > currentBalance) {
                    cout << "Insufficient funds. Unable to carry out the transaction" << endl;
                } else {
                    currentBalance -= withdrawal;
                    cout << "The available balance is: " << currentBalance << endl;
                }
                break;
            }
            case 3: {
                int deposit;
                cout << "Enter the amount to deposit" << endl;
                cin >> deposit;

                if (deposit <= 0) {
                    cout << "Enter a valid amount" << endl;
                } else {
                    currentBalance += deposit;
                    cout << "The current balance is: " << currentBalance << endl;
                }
                break;
            }
            case 4: {
                cout << "Exiting the program" << endl;
                return;
            }
            default: {
                cout << "Invalid option" << endl;
                break;
            }
        }
    }
}
