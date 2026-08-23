#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, 0, 1, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int missing_number = n;

    for(int i = 0; i < n; i++){
        if(arr[i] < n){
            missing_number ^= arr[i];
            missing_number ^= i;
        }
    }

    cout << "The missing number is: " << missing_number << endl;

    return 0;
}