#include <bits/stdc++.h>
using namespace std;

// Time Complexity = O(n), Space Complexity = O(1)
int rev_num(int n){
    int rev = 0;
    while(n!=0){
        int digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    return rev;
}

int main(){
    int n;
    cin >> n; 
    cout << rev_num(n);
}