#include <bits/stdc++.h>
using namespace std;

// T = O(n^2), S = O(1)
void insertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int current = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > current){
            //swap
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    cout << "After Insertion sort: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    insertionSort(arr, n);
}