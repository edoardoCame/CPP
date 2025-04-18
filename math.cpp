#include <iostream>
using namespace std;


int main(){
    int x = 10;
    int y = x++;
    int z = ++x;
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    // x is incremented after assignment to y, so y = 10
    // x is incremented before assignment to z, so z = 12
    // The final value of x is 12
    // The output will be: x: 12, y: 10, z: 12
    return 0;
}