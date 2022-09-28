#include<bits/stdc++.h>
using namespace std;

/* Brute Force: T = O(n*n), S = O(n)
void intersectionOfTwoArrays(int arr1[], int n, int arr2[], int m){
    vector<int> ans;
    vector<int> visited(m,0);
    int i=0, j=0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(arr1[i]==arr2[j] && visited[j]==0){  // if element matches and has not been matched with any other before
                ans.push_back(arr2[j]);
                visited[j]=1;
                break;
            }else if(arr2[j]>arr1[i]) break;
            //because array is sorted, element will not be beyond this
        }
    }
    cout<<"The elements are: ";
    for(int i=0; i<ans.size();i++){
        cout << ans[i] << " ";
    }

}
*/

//Using Two Pointer Approach T = O(n), S = O(1)
void intersectionOfTwoArrays(int arr1[], int n, int arr2[], int m){
    vector<int> ans;
    int i=0, j=0;           //to traverse the arrays
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){       //if current element in i is smaller
            i++;
        }else if(arr2[j]<arr1[i]){
            j++;
        }else{
            ans.push_back(arr1[i]);          // both elements are equal
            i++;
            j++;
        }
    }
    cout<<"The elements are: ";
    for(int i=0; i<ans.size();i++){
        cout << ans[i] << " ";
    }
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
    intersectionOfTwoArrays(arr1, n, arr2, m);
    
    return 0;
}