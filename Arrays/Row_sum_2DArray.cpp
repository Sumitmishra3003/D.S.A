#include<iostream>
using namespace std;

void printrowsize(int arr[][3], int rowsize, int colsize){
    for(int i=0; i<rowsize; i++){
        int sum = 0;
        for(int j=0; j<colsize; j++){
            sum = sum + arr[i][j];
        }
        cout<<"sum of row "<<i+1<<" is "<<sum<<endl;
    }
}


int main(){

    int rowsize = 3;
    int colsize = 3;
    int arr[3][3];

    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<"enter the element at index "<<i<<" "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    printrowsize(arr, rowsize, colsize);
}
//time complexity - O(R*C)
//space complexity - O(R*C)