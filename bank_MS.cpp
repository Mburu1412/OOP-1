/*
C++ program that demonstrates inheritance using a simple Bank Management System:
Author : Mburu Martin 
Reg No : BSCIT - 05 - 0167 / 2024
Date : Feb 27
*/ 
#include <iostream>
#include <string>

using namespace std;

// Base class: account_Holder
class account_Holder {
protected:
    string name;

public:
    void setName(string n) { 
    name = n ;
    }
    string getName() {
         return name ;
    }
};

// Derived class: bank_Account (inherits from account_Holder)
class bank_Account : public account_Holder {
private:
    int account_Number;
    double balance;

public:
    // Constructor to initialize all values
    bank_Account(string n, int accNum, double bal) {
        name = n;
        account_Number = accNum;
        balance = bal;
    }

    int getAccountNumber() { 
    return account_Number ;
    }
    double getBalance() { 
    return balance ;
    }
};

// Derived class: savings_Account (inherits from bank_Account)
class savings_Account : public bank_Account {
private:
    double interest_Rate;

public:
    // Constructor to initialize all values
    savings_Account(string n, int accNum, double bal, double rate)
        : bank_Account(n, accNum, bal) {
        interest_Rate = rate;
    }

    double getInterestRate() { 
    return interest_Rate ;
    }
};

// Main function
int main() {
    string name;
    int account_Number;
    double balance, interest_Rate;

    // User Input
    cout << "Enter Account Holder's Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> account_Number;

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "Enter Interest Rate (%): ";
    cin >> interest_Rate;

    // Create savings_Account object
    savings_Account userAccount(name, account_Number, balance, interest_Rate);

    // Display details
    cout << "\n=== Account Details ===\n";
    cout << "Name: " << userAccount.getName() << endl;
    cout << "Account Number: " << userAccount.getAccountNumber() << endl;
    cout << "Balance: $" << userAccount.getBalance() << endl;
    cout << "Interest Rate: " << userAccount.getInterestRate() << "%\n";

    return 0;
}

 