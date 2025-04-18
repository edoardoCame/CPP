#include <iostream>

int main(){
    int a = 5;
    int b = 10;
    //I wanna swap the two variables. I need a third one.
    int temp;
    temp = a;
    a = b;
    b = temp;
    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;
    return 0;
}