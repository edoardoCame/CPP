#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Basic for loop structure:
    // for(initialization; condition; increment/decrement)
    
    // Example 1: Counting from 1 to 5
    cout << "Example 1: Basic for loop" << endl;
    for(int i = 1; i <= 5; i++) {
        cout << "Count: " << i << endl;
    }
    cout << endl;
    
    // Example 2: Iterating over an array
    cout << "Example 2: Iterating through an array" << endl;
    int numbers[] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }
    cout << endl;
    
    // Example 3: Counting backwards
    cout << "Example 3: Counting backwards" << endl;
    for(int i = 10; i > 0; i--) {
        cout << "Reverse count: " << i << endl;
    }
    cout << endl;
    
    // Example 4: Nested for loops (creating a small multiplication table)
    cout << "Example 4: Nested for loops (3x3 multiplication table)" << endl;
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            cout << i << " x " << j << " = " << (i * j) << "\t";
        }
        cout << endl;
    }
    cout << endl;
    
    // Example 5: For loop with multiple expressions
    cout << "Example 5: Multiple expressions in for loop" << endl;
    for(int i = 1, j = 10; i <= 5; i++, j--) {
        cout << "i = " << i << ", j = " << j << endl;
    }
    cout << endl;
    
    // Example 6: Range-based for loop (C++11 and later)
    cout << "Example 6: Range-based for loop" << endl;
    vector<string> fruits = {"Apple", "Banana", "Orange", "Mango"};
    for(const string& fruit : fruits) {
        cout << "Fruit: " << fruit << endl;
    }
    cout << endl;
    
    // Example 7: For loop with step value
    cout << "Example 7: For loop with step value" << endl;
    for(int i = 0; i <= 20; i += 5) {
        cout << "Value: " << i << endl;
    }
    cout << endl;
    
    // Example 8: Infinite for loop (with break)
    cout << "Example 8: For loop with break statement" << endl;
    int counter = 0;
    for(;;) { // Infinite loop
        if(counter >= 5)
            break;
        cout << "Iteration " << counter << endl;
        counter++;
    }
    
    return 0;
}