#include <bits/stdc++.h>
using namespace std;


// Time Complexity T = O(nlogn), S = O(n)
class Solution{
public:
    void merge(int arr[], int left, int mid, int right){
        int i = left;           // starting index of left half of array
        int j = mid+1;        // starting index of right half of array
        int f = left;           // index used to transfer elements in temporary array
        int temp[100000]={0};     // Temporary array

        //storing elements in the temporary array in a sorted manner
        while(i<=mid && j<=right){
            if(arr[i] < arr[j]){
                temp[f] = arr[i];
                i++;
            }else{
                temp[f] = arr[j];
                j++;
            }
            f++;
        }

        //if elements on the left half are still left
        if(i>mid){
            while(j <= right){
                temp[f] = arr[j];
                f++;
                j++;
            }
        }else{
            // if elements on the right half are still left
            while(i <= mid){
                temp[f] = arr[i];
                f++;
                i++;
            }
        }

        for(int f=left; f<=right; f++){
            arr[f] = temp[f];
        }
    }
    void mergeSort(int arr[], int left, int right){
        if(left < right){
            int mid = (left + right) / 2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid+1, right);
            merge(arr, left, mid, right);
        }
    }

};


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    Solution obj;
    cout << "Before Sorting Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }

    cout << endl;

    obj.mergeSort(arr, 0, n-1);

    cout << "After Merge Sort Algorithm: ";
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }

    return 0;
}