#include<iostream>
using namespace std;

void printdiagonal(int arr[][3], int rowsize, int colsize){

    int limit = min(rowsize, colsize);

    for(int i=0; i<limit; i++){
       cout<<arr[i][i]<<" ";
    }
}

int main(){
    
    int rowsize;
    int colsize;
    int arr[1000][3];

    cout<<"Enter no of rows : ";
    cin>>rowsize;

    cout<<"Enter no of column : ";
    cin>>colsize;


    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<"enter the element at index "<<i<<" "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    printdiagonal(arr, rowsize, colsize);

}