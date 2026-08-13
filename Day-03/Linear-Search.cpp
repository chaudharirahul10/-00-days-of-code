#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int target = 30;
    int n= sizeof(arr)/sizeof(arr[0]);
    bool found = false;

for(int i = 0; i < n; i++){
    if(arr[i] == target){
        cout << "Element found at index: " << i << endl;
        found = true;
        break;
    }
}

if(!found){
    cout << "Element not found" << endl;
}
    return 0;
}