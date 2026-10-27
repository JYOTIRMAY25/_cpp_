// constant 

//the const keyword sepecifies that a variable's value is consatant
//tell the complier to prevent anything from modifying it ( reaad only)

#include<iostream>

int main(){

    const double pi = 3.14;
    double radius = 12;
    double circumference = 2 * pi * radius;
    std::cout<<circumference<<"cm"<<std::endl;

    const int lightspeed=1234568;
    const int hight =122;


    return 0;
    
}


