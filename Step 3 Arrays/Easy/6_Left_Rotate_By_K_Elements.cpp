#include <bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int start, int end){
        while(start<=end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
}

//Efficient Solution: T = O(n), S = O(1)
void leftRotate(int arr[], int n, int k){
    Reverse(arr, 0, k-1);
    Reverse(arr, k, n-1);
    Reverse(arr, 0, n-1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int k;
    cin >> k;
    for(int i=0; i<n; i++) cout << arr[i]<<" ";
    leftRotate(arr, n, k);
    cout << endl;
    for(int i=0; i<n; i++) cout << arr[i]<<" ";
}