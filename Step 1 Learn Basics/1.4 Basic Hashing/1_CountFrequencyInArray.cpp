#include <bits/stdc++.h>
using namespace std;

// T = O(n) O = O(n)
void Frequency(int arr[], int n){
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    Frequency(arr, n);
    return 0;
}