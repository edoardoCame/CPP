#include <iostream>
using namespace std;

int main(){
    int sales = 95000;
    double state_tax = 0.04;
    double county_tax = 0.02;
    double total_tax = state_tax + county_tax;
    double total_tax_amount = sales * total_tax;
    double result = sales - total_tax_amount;
    cout << "The total tax amount is: $" << total_tax_amount << endl;
    cout << "The total amount after tax is: $" << result << endl;
}
