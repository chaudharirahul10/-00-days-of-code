#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,-1,2,-2,3,-3,4,-4,5,-5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            swap(arr[index], arr[i]);
            index++;
        }
    }
    cout<<"After moving negative numbers to the front: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}