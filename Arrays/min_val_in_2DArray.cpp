#include<iostream>
#include<limits.h>
using namespace std;

int minimum(int arr[][3], int rowsize, int colsize){
    int minimumvalue = INT_MAX;

    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            minimumvalue = min(arr[i][j], minimumvalue);
        }
    }
    return minimumvalue;
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
    int ans = minimum(arr, rowsize, colsize);

    cout<<"answer is :"<<ans<<endl;
}