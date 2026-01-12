#include<iostream>
using namespace std;


int main(){

    int arr [2][3];
    int rowsize = 2;
    int colsize = 3;

    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<"enter the element at index "<<i<<" "<<j<<" : ";
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//time complexity - O(R*C)
//space complexity - O(R*C)