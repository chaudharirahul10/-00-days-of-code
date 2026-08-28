#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 7, 3, 8, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }

        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    int difference = largest - smallest;

    cout << "Largest difference is: " << difference << endl;

    return 0;
}