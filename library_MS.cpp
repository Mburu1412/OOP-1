/* 
C ++ Program to show Multi Level Inheritance Using a Library Management System
Author : Mburu Martin 
Reg No : BSCIT - 05 - 0167 / 2024
Date : Feb 28
*/
#include <iostream>
using namespace std;

//Base class Person
class Person {
    protected :
    string name ;
    
    public :
    void setName(string n) {
        name = n ;
    }
    string getName() {
        return name ;
    }
};

//Derived class : library_Member (inherits from Person)
class library_Member : public Person {
    private :
    int member_ID ;
    int books_Borrowed ;
    
    public :
    //Constructor to initialize all values
    library_Member (string n, int ID, int books) {
        name = n ;
        member_ID = ID ;
        books_Borrowed = books ;
    }
    
    int getMemberID() {
        return member_ID ;
    }
    int getBooksBorrowed () {
        return books_Borrowed ;
    }
};

//Derived class : premium_Member (inherits from library_Member)
class premium_Member : public library_Member {
    private :
    double membership_Fee ;
    
    public :
    //Constructor to initiaize all values
    premium_Member (string n, int ID, int books, double fee) : library_Member (n, ID, books) {
        membership_Fee = fee ;
    }
    
    double getMembershipFee () {
        return membership_Fee;
    }
};

int main () {
    int member_ID, books_Borrowed ;
    string name;
    double membership_Fee ;
    
    //Prompt user for input 
    cout<<"Enter your full Name :" <<endl ;
    getline (cin, name);
    
    cout << "Enter your membership ID : " << endl ;
    cin >>member_ID ;
    
    cout << "Enter the number of Books Borowed : " << endl ;
    cin >> books_Borrowed ;
    
    cout << "Enter the Membership Fee : " << endl ;
    cin >> membership_Fee ;
    
    //Create  premium member object 
    premium_Member Member_1 (name, member_ID, books_Borrowed, membership_Fee ) ;
    
    //Display the inputs
    cout << "\n ==== Library Management System ==== \n " ;
    cout << "Name is : " <<Member_1.getName() <<endl ;
    cout << "Membership ID is : " << Member_1.getMemberID () << endl ;
    cout << "Number of Books Borrowed : " <<Member_1.getBooksBorrowed () << endl ;
    cout << "Membership Fee is : " <<Member_1.getMembershipFee () <<endl ;
    return 0 ; 
}