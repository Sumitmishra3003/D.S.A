#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[1000];
    int size = 4;
    int target;

    for(int i = 0; i < size; i++) {
        cout << "Enter element at index " << i << " : ";
        cin >> arr[i];
    }

    cout << "Enter target : ";
    cin >> target;

    bool ans = linearSearch(arr, size, target);
    cout << "Ans is : " << ans;
}

// time complexity is - O(n)
// space complexity is - 0(1)

//Space complexity = Extra memory used by the algorithm apart from the input
// Memory used for input (array, variables provided by user) is NOT counted.