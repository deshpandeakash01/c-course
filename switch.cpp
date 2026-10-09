#include <iostream>
using namespace std;

int main() {
    int n;
    int ans1, ans2, ans3, ans4, ans5, ans6;
    cin >> n;

    switch(1) { // Using switch(1) to execute the entire sequence
        case 1: {
            int X = n / 100;
            cout << "100*" << X << endl;
            ans1 = n % 100;
            // Fall through to the next case
        }
        
        case 2: {
            ans2 = ans1 / 50;
            cout << "50*" << ans2 << endl;
            ans3 = ans1 % 50;
           
        }
        
        case 3: {
            ans4 = ans3 / 20;
            cout << "20*" << ans4 << endl;
            ans5 = ans3 % 20;
          
        }
        
        case 4: {
            ans6 = ans5 / 10;
            cout << "10*" << ans6 << endl;
            int ans7 = ans5 % 10;
            cout << "1*" << ans7 << endl;
            break;
        }

        default:
            cout << "Invalid input!" << endl;
            break;
    }

    return 0;
}