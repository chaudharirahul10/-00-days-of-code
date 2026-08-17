#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 89, 23, 56, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }

        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << "Maximum element: " << maximum << endl;
    cout << "Minimum element: " << minimum << endl;

    return 0;
}