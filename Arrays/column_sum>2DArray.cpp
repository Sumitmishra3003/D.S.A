#include<iostream>
using namespace std;

void colsum(int arr[][3], int rowsize, int colsize){
    for(int col=0; col<colsize; col++){
        int sum = 0;
        for(int row=0; row<rowsize; row++){

            sum = sum +arr[row][col];
        }
        cout<<sum<<endl;

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
    colsum(arr, rowsize, colsize);
}

//time complexity - O(R*C)
//space complexity - O(R*C)