#include<bits/stdc++.h>
using namespace std;

/*
// Using map: T = O((m+n)log(m+n)), S = O(m+n) if space of union vector is considered otherwise O(1).
vector<int> unionOfTwoArray(int arr1[], int n, int arr2[], int m){
    map<int, int> freq;
    vector<int> Union;
    for(int i=0; i<n; i++) freq[arr1[i]++];
    for(int i=0; i<m; i++) freq[arr2[i]++];
    for(auto & it: freq)
        Union.push_back(it.first);
    return Union;
}
*/

/*
//Using set: T = O((m+n)log(m+n)), S = O(m+n) if space of union vector is considered otherwise O(1).
vector<int> unionOfTwoArray(int arr1[], int n, int arr2[], int m){
    set<int> s;
    vector<int> Union;
    for(int i=0; i<n; i++) s.insert(arr1[i]);
    for(int i=0; i<m; i++) s.insert(arr2[i]);
    for(auto it: s)
        Union.push_back(it);
    return Union;
}
*/

//Using Two Pointers: T = O(m+n), S = O(m+n)
vector<int> unionOfTwoArray(int arr1[], int n, int arr2[], int m){
    int i = 0, j = 0; // pointers
    vector<int> Union; // Union vector
    while(i < n && j < m){
        if(arr1[i] <= arr2[j]){ // Case 1 and 2
            if(Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }else{ // case 3
            if(Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while(i < n){ // If any element left in arr1
        if(Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while(j < m){ // If any element left in arr2
        if(Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

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
    vector<int> Union = unionOfTwoArray(arr1, n, arr2, m);
    for(auto val: Union)
        cout << val << " ";
    return 0;
}