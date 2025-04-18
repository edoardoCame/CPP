#include <iostream>

int main(){
    const double pi = 3.14159; // constant value of pi
    pi = 3.14; // This will cause a compilation error because pi is a constant
    std::cout << "Value of pi: " << pi << std::endl; // This line will not be executed
    return 0;
}