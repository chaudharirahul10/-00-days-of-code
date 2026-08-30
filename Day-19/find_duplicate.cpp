#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,2,1,1,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        bool alreadyPrinted = false;
        for(int k = 0; k < i; k++){
            if(arr[i] == arr[k]){
                alreadyPrinted = true;
                break;
            }
        }
        if(alreadyPrinted){
            continue;
        }
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                cout << "Duplicate element found: " << arr[i] << endl;
                break;
            }
        }
    }

    return 0;
}