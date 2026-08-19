#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 30, 40, 20, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        cout << "Second largest element does not exist" << endl;
    }
    else {
        cout << "Largest element: " << largest << endl;
        cout << "Second largest element: " << second_largest << endl;
    }

    return 0;
}