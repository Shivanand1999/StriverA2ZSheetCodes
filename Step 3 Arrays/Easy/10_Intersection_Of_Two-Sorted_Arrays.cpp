#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin >> n;
    int arr1[n];
    for(int i=0; i<n; i++) cin >> arr1[i];
    int m;
    cin >> m;
    int arr2[m];
    for(int i=0; i<n; i++) cin >> arr2[i];
    
    // T = O(n), S = O(1)
    vector<int> intersectionVector;
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr2[j]<arr1[i]){
            j++;
        }else{
            intersectionVector.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    cout<<"The elements are: ";
    for(int i=0; i<intersectionVector.size();i++){
        cout << intersectionVector[i] << " ";
    }
    return 0;
}