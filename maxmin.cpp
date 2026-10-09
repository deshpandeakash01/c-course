#include <iostream>
#include <climits>
using namespace std;

int getmin(int arr[], int size) {
    int min = INT_MAX;
    for(int i = 0; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int getmax(int arr[], int size) {
    int max = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    cin >> size;

    int arr[100];  // Specify the size of the array

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "MAX = " << getmax(arr, size) << endl;
    cout << "MIN = " << getmin(arr, size) << endl;

    return 0;
}
