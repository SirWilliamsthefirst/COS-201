#include  <iostream>
 int main(){
    //integer(stores whole number)
    int x = 5;
    int y = 6;
    int sum = x + y;

    //double(numbers including decimals)
    double price = 10.29;
    double gpa = 4.99;

    //single character
    char grade = 'A';
    char intial = 'C';
    char dollarsign = '$';

    //boolean(true or false)
    bool student = false;
    bool power = true;
    bool forsale = true;

    //string(objects that represents a sequence of text)
    std::string name = "bro";
    std::string day = "Friday";
    std::string food = "2 pizza";

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum <<'\n';

    std::cout << food <<'\n';
    std::cout << "hello " << name << '\n';
    std::cout << "how are you " << name << '\n';
    return 0;
 }