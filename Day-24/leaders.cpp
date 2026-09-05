#include<iostream>
using namespace std;

int main(){

    int arr[] = {10, 9, 11, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxElement = arr[n - 1];
    cout << "Leaders in the array are: ";
    cout << maxElement << " ";
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] > maxElement){
            cout << arr[i] << " ";
            maxElement = arr[i];
        }
    }
    return 0;
}