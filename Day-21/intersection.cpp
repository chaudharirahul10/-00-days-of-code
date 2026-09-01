#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Intersection of two arrays is: ";
    for(int i = 0; i < n1; i++){
        bool alreadyPrinted = false;
        for(int k = 0; k < i; k++){
            if(arr1[k] == arr1[i]){
                alreadyPrinted = true;
                break;
            }
        }
        if(alreadyPrinted){
            continue;
        }
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    return 0;
}