#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,2,5,6,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Repeating elements are: ";
    for(int i=0;i<n;i++){
        bool alreadyPrinted=false;
        for(int k=0;k<i;k++){
            if(arr[k]==arr[i]){
                alreadyPrinted=true;
                break;
            }
        }
        if(alreadyPrinted){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}