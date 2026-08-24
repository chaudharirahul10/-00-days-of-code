#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,3,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[index]){
            index++;
            arr[index] = arr[i];
        }
    }
    cout << "Array after removing duplicates: ";
    for(int i = 0; i <= index; i++){
        cout << arr[i] << " ";
    }
    return 0;
}