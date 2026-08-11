#include<iostream>
using namespace std;

int main(){
    int arr[]={1,5,3,4,2};
    int target=9;
    for(int i=0;i<5;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]+arr[i]==target){
                cout<<arr[j]<<" and "<<arr[i]<<" sum to:  "<<target<<endl;
                cout<<"Element found at index: "<<j<<" and "<<i<<endl;
            }

        }

    }
    return 0;
}