#include <bits/stdc++.h>
using namespace std;

/* T = O(nlogn), S = O(n)   but it will fail if duplicate elements are present in array for ex: [1,2,4,7,7,5]
void secondSmallestAndLargest(int arr[], int n){
    if(n==0 || n==1) cout << -1 << " " << -1 << endl;
    sort(arr, arr+n);

    int small = arr[1];
    int large = arr[n-2];

    cout << "Second smallest is: "<< small << endl;
    cout << "Second largest is: " << large << endl;
}
*/


// T = O(n), S = O(n)
void secondSmallestAndLargest(int arr[], int n){
    if(n==0 || n==1) cout << -1 << " " <<" " << endl;
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;
    for(int i=0; i<n; i++){
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]<second_small && arr[i]!=small)
            second_small = arr[i];
        if(arr[i]>second_large && arr[i]!=large)
            second_large = arr[i];
    }

    cout << "Second smallest is: "<< second_small << endl;
    cout << "Second largest is: " << second_large << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    secondSmallestAndLargest(arr, n);

    return 0;
}