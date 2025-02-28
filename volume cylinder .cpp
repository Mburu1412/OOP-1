/*Program to calculate volume of a cylinder
Name: Mburu Martin
Adm No:BSCIT-05-0167/2024
Date: January 25
*/

#include<iostream>
//iostream is a header file used for input.output purpose.
using namespace std;
#define PI 3.142

double volume( double radius, double height);

int main () {
    double volume, radius, height;
    
    //Ask the user to input radius and height
    cout<<"Enter the radius of the cylinder:" <<endl;
    cin>>radius;
    
    cout<<"Enter the height of the cylinder:" <<endl;
    cin>>height;
    
    //Calculate volume of cylinder 
    volume=PI*radius*radius*height;
    
    //Display the result 
    cout<<"Volume of the cylinder:"<<volume <<endl;
    
    return 0;
}
double volume(double radius, double height) {
    double volume;
     volume=PI*radius*radius*height;
     return volume;
}
