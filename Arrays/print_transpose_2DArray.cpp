#include<iostream>
using namespace std;

void transpose(int arr[][3], int rowsize, int colsize){

    cout<<"transpose of matrix is :"<<endl;

    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    
    int arr[3][3];
    int rowsize = 3;
    int colsize = 3;

    for(int i=0;i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<"enter the value for index "<<i<<","<<j<<":";
            cin>>arr[i][j];
            cout<<endl;
        }
    }
    transpose(arr, rowsize, colsize);
}