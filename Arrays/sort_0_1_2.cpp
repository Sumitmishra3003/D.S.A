/*#include<iostream>
using namespace std;

void sorting(int arr[], int size){
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;

    for(int i=0; i<size; i++)
{    if(arr[i] == 0)
    zerocount++;

    if(arr[i] == 1)
    onecount++;

    if(arr[i] == 2)
    twocount++;
}
    for(int i=0; i<zerocount; i++){
        cout<<"0 ";
    }
    for(int i=zerocount; i<zerocount+onecount; i++){
        cout<<"1 ";
    }
    for(int i=zerocount+onecount; i<size; i++){
        cout<<"2 ";
    }
}

int main(){

    int arr[1000];
    int size;

    cout<<"enter size of array : ";
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<"enter element at index "<<i<<" : ";
        cin>>arr[i];
    }

    sorting(arr, size);
}*/
// time complexity - O(n)
// space complexity - O(1)
// in both the solution, time and space complexity is same

// but the above code only print the array it does not modify the actual array.

#include<iostream>
using namespace std;

void sorting(int arr[], int size){
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;

    for(int i=0; i<size; i++)
{    if(arr[i] == 0)
    zerocount++;

    if(arr[i] == 1)
    onecount++;

    if(arr[i] == 2)
    twocount++;
}

int i = 0;

   while (zerocount--){
     arr[i] = 0;
      i++;
    }
   while (onecount--) {
    arr[i] = 1;
     i++;
    }
   while (twocount--) {
    arr[i] = 2;
     i++;
    }

   for(int i=0; i<size; i++){
    cout<<arr[i];
   }
}

int main(){

    int arr[1000];
    int size;

    cout<<"enter size of array : ";
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<"enter element at index "<<i<<" : ";
        cin>>arr[i];
    }

    sorting(arr, size);
}
// this code actually modify the code