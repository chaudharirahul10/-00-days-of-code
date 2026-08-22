#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,1,2,0,3,0,4,0,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[index] = arr[i];
            index++;
        }
    }

    while(index < n){
        arr[index] = 0;
        index++;
    }

    cout << "Array after moving zeroes: ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}