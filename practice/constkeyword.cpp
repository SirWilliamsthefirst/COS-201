#include <iostream>

int main(){
    //The const key word specifies that a variable's value is constant
    //tells the computer to prevent anything from modifying it
    // so it is effectively (read only)

    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm";

}