#include <iostream>
using namespace std;

void display(int a, int b = 0) {
    cout << "a: " << a << ", b: " << b << endl;
}

int main() {
    display(5); // Calls with default b
    display(5, 10); // Calls with given b

    
}
