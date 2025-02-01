/*
Creating a class Cylinder 
Author: Mburu Martin 
Reg No: BSCIT-05-0167/2024
*/
#include<iostream>
using namespace std;

class Cylinder {
    public:
          double radius;
          double height;
          float PI=3.142;
          
          double surface_Area() {
              double surface_Area=2*PI*radius*(radius+height);
              return surface_Area;
          }
          
          double volume () {
              double volume=PI*radius*radius*height;
              return volume;
          }
};
int main() {
    Cylinder cylinder_1;
    cylinder_1.radius = 3;
    cylinder_1.height = 4;
    cylinder_1.PI = 3.142;
    float vol, area;
    vol = cylinder_1.volume() ;
    area = cylinder_1.surface_Area() ;
    
    cout<<"volume:" <<vol <<endl;
    cout<<"area:" <<area <<endl;
    return 0;
}