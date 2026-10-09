#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    // Arithmetic operations
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;// this will only return reminder

    // Comparison operations
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;

    // Logical operations
    cout << "(a > b) && (b > 0): " << ((a > b) && (b > 0)) << endl;// and 
    cout << "(a < b) || (b > 0): " << ((a < b) || (b > 0)) << endl;// or
    cout << "!(a > b): " << (!(a > b)) << endl;//negation

    return 0;