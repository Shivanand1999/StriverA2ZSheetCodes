/*Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and 
move non-negative integers to the front by maintaining their order.*/

#include <bits/stdc++.h>
using namespace std;

/*8
//Brute Force: T = O(n), S = O(n)
void zeroesToEnd(int arr[], int n){
    int temp[n];
    int k = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp[k] = arr[i];
            k++;
        }
    }
    while(k<n){
        temp[k]=0;
        k++;
    }
    for(int i=0; i<n; i++) cout << temp[i]<<" ";
}
*/

void zeroesToEnd(int arr[], int n){
    //finding first zero occurence
    int k = 0;
    while(k<n){
        if(arr[k]==0) break;
        else k=k+1;
    }

    //finding zeroes and immediate non-zero elements and swapping them
    int i=k, j=k+1;
    while(i<n && j<n){
        if(arr[j]!=0){
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
    for(int i=0; i<n; i++) cout << arr[i]<<" ";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    zeroesToEnd(arr, n);
}