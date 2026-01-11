#include<iostream>
using namespace std;

int main(){

    int arr[1000];
    int size = 2;

    for(int i=0; i<size; i++){
        cout<<"enter the value at index "<<i<<" : ";
        cin>>arr[i];
    }

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            for(int k=0; k<size; k++){
                cout<<arr[i]<<arr[j]<<arr[k]<<" ";
            }
        }
    }
}

// time complexity - O(n^3)
// space complexity - O(1)
// this is the optimal code.