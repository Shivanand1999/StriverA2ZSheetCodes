#include <bits/stdc++.h>
using namespace std;

// T = O(n^2), S = O(1)
void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int minimum = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minimum]){
                minimum = j;
            }
        }
        swap(arr[minimum], arr[i]);
    }

    cout << "After Selection sort: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    selectionSort(arr, n);
}