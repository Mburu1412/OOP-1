/*
C++ Program To Show Class Car
Author : Mburu Martin 
Reg No: BSCIT-05-0167/2024
Date : January 28
*/
#include <iostream>
#include<cstring>
using namespace std;

// Define a class named Car
class Car {
public:
    string brand;
    string model;
    float price;
    int mileage;

    // Constructor to initialize the data members
    Car(string b, string m, float p, int mil) {
        brand = b;
        model = m;
        price = p;
        mileage = mil;
    }

    // Function to display car details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Function to simulate driving and update mileage
    void drive(int distance) {
        mileage += distance;
        cout << "Updated Mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    // Create a Car object with given details
    Car myCar("Toyota", "Corolla", 20000, 5000);

    // Display the car details
    myCar.display();

    // Simulate driving for 150 miles and display updated mileage
    myCar.drive(150);

    // Simulate driving for 300 miles and display updated mileage
    myCar.drive(300);

    return 0;
}