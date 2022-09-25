#include<bits/stdc++.h>
using namespace std;

// Linear Search: T = O(n), S = O(1)
int linearSearch(int arr[], int n, int k){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==k) return i;
    }
    return -1;
}

int main()
{   int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int k;
    cin >> k;
    cout << k << " element is present at index " << linearSearch(arr, n, k);
    return 0;
}