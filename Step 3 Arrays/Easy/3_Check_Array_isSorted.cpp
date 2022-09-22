#include <bits/stdc++.h>
using namespace std;

/*
// T = O(n), S = O(n)
bool isSorted(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i])
                return false;
        }
    }
    return true;
}
*/

// T = O(n), S = O(1)
bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1])
            return false;
    }

    return true;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    if(isSorted(arr, n)) cout <<"Array is sorted" << endl;
    else cout << "Array is not sorted" << endl;
}