#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}

/*
// by Iteration: T = O(n), S = O(n)
void reverseArray(int a[], int n){
    int ans[n];
    for(int i=n-1;i>=0; i--){
        ans[n-i-1] = a[i];
    }
    printArray(ans,n);
}
*/

/*
//Space Optimized using 2 pointers: T = O(n), S = O(1)
void reverseArray(int a[],int n){
    int p1=0,p2=n-1;
    while(p1<p2){
        swap(a[p1],a[p2]);
        p1++;
        p2--;
    }
    printArray(a,n);
}
*/

/* By using Recursion: T = O(n), S = O(1)
void reverseArray(int arr[], int start, int end){
    if(start < end){
        swap(arr[start], arr[end]);
        reverseArray(arr, start+1, end-1);
    }
}
*/
//Reverse array using library function: T = O(n), S = O(1)
void reverseArray(int arr[], int n){
    reverse(arr, arr+n);
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    reverseArray(arr,n);
}