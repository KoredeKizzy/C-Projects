Account Class
The Account Class project is a simple implementation of a banking account class in C++. This project provides a basic framework for managing bank accounts, including 
functionalities such as deposit, withdrawal, and balance inquiry.

Features
Deposit: Allows users to deposit funds into their account.
Withdrawal: Enables users to withdraw funds from their account, provided they have sufficient balance.
Balance Inquiry: Allows users to check the current balance of their account.
Account Information: Provides basic information about the account, including account number, owner's name, and current balance.
Error Handling: Implements basic error handling to ensure that operations such as withdrawal do not result in a negative balance.
Usage.

To use the Account Class in your project, follow these steps:

Include the Account.h header file in your project.
Create an instance of the Account class with the desired initial balance.

Use the provided member functions (deposit, withdraw, getBalance, etc.) to perform banking operations.
cpp

#include "Account.h"
#include <iostream>

int main() {
    // Create an account with initial balance of $1000
    Account myAccount(1000);

    // Deposit $500 into the account
    myAccount.deposit(500);

    // Withdraw $200 from the account
    myAccount.withdraw(200);

    // Print the current balance
    std::cout << "Current Balance: $" << myAccount.getBalance() << std::endl;

    return 0;
}
Contributors
Korede Akanbi
License
This project is licensed under the MIT License - see the LICENSE file for details.
