#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of Fibonacci terms to generate: ";
    std::cin >> n;
    
    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }
    
    // Initialize first two Fibonacci numbers
    long long a = 0, b = 1;
    
    std::cout << "Fibonacci Sequence: ";
    
    // If n is 1, print only the first term
    if (n >= 1)
        std::cout << a << " ";
    
    // Print second term and calculate the rest
    if (n >= 2)
        std::cout << b << " ";
    
    // Generate and print the rest of the sequence
    for (int i = 3; i <= n; ++i) {
        long long next = a + b;
        std::cout << next << " ";
        a = b;
        b = next;
    }
    
    std::cout << std::endl;
    return 0;
}