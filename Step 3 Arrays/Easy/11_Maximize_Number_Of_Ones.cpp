//Problem: We need to find maximum number of consecutive 1's by swapping k digits

#include<bits/stdc++.h>
using namespace std;

int findConecutiveOnes(vector<int> &a, int n, int k){
    //a[i..j];
    int zerocnt = 0, i = 0, ans = 0;
    for(int j=0; j<n; j++){
        if(a[j]==0)
            zerocnt++;
        while(zerocnt>k){
            if(a[i]==0){
                zerocnt--;
            }
            i++;
        }
        //zerocnt <= k
        ans = max(ans, j-i+1);
    }
    return ans;
}

int main()
{   
    int n; 
    cin >> n;
    int k;
    cin >> k;
    vector<int> a(n);
    for(auto &i : a)
        cin >> i;


    cout << findConecutiveOnes(a, n, k);
    return 0;
}