#include<iostream>
using namespace std;

int main(){

    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Union of two arrays is: ";

    // Print unique elements from first array
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

        cout << arr1[i] << " ";
    }

    // Print unique elements from second array
    for(int i = 0; i < n2; i++){

        bool alreadyPrinted = false;

        // Check if element already appeared in arr1
        for(int k = 0; k < n1; k++){
            if(arr2[i] == arr1[k]){
                alreadyPrinted = true;
                break;
            }
        }
        for(int k = 0; k < i; k++){
            if(arr2[i] == arr2[k]){
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted){
            continue;
        }

        cout << arr2[i] << " ";
    }

    cout << endl;

    return 0;
}