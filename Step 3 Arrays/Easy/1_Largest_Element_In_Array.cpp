#include <bits/stdc++.h>
using namespace std;

// T = O(n), S = O(1)
int findMaxElement(int arr[], int n){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

/*
// T = O(N*log(N)), S = O(n)
int findMaxElement(int arr[], int n){
    sort(arr, arr+n);
    return arr[n-1];
}
*/

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Maximum Element: " << findMaxElement(arr, n);
}