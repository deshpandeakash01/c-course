#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int a1 = n / 10; 
    int a = n % 10; 
    int a2 = a1 / 10; 
    int b = a1 % 10; 
    cout << (a * b * a2) - (a + b + a2); 
}
