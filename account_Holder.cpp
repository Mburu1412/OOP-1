/*
C++ Program For Class Employee
Author : Mburu Martin
Reg No : BSCIT-05-0167/2025
Date : February 9
*/

#include <iostream>

using namespace std;

class BankAccount {
	private:
		string accountHolder;
		double balance;
		
		public:
			void setData (string a) {
				accountHolder = a;
			}	
			
			string getData () {
				return accountHolder;
			}
			
			void setBalance (double b) {
				balance = b;
			}
			
			double getBalance () {
				return balance;
			}
			
};

int main () {
	BankAccount Bank_1;
	
	Bank_1.setData ("Zee");
	cout<<"Name is " <<Bank_1.getData() <<endl;
	
	Bank_1.setBalance(234212);
	cout<<"Balance is " <<Bank_1.getBalance() <<endl;
	return 0;
}