#include <bits/stdc++.h>
using namespace std;

/*
// Brute Force: T = O(n) S = O(n)
void leftRotate(int arr[], int n){
    int temp[n];
    for(int i=0; i<n-1; i++) temp[i] = arr[i+1];
    temp[n-1] = arr[0];
    for(int i=0; i<n; i++) cout << temp[i] << " ";
}
*/

//Efficient Solution: T = O(n), S = O(1)
void leftRotate(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i<n-1; i++) arr[i] = arr[i+1];
    arr[n-1] = temp; 
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    leftRotate(arr, n);
}