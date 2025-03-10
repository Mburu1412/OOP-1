//C ++
/*
C ++ Program to demonstrate a 1 D Array
Author : Mburu Martin
Reg No : BSCIT-05-0167/2024
Date : March 6
*/

#include<iostream> 
using namespace std ;

int main () {
    int n, i ;
    float sum, average ;
    
    //Prompt user for number of inputs
    cout<<"Enter the number of elements : " <<endl ;
    cin>> n;
    
    //Declaring an array to store the numbers
    int number[n] ;
    
    //Taking array elements as inputs 
    cout<< "Enter  number of elements : " << n << endl ;
    for (i = 0 ; i < n ; ++i) {
        cout << "Enter number "<<i + 1  <<endl;
        cin >>number [i] ;
        sum += number[i] ;
    }
    
    average = sum / n ;
    cout << "Average is " <<average ;
    return 0 ;
}