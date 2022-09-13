#include <bits/stdc++.h>
using namespace std;

// Time Complexity = O(N), Space Complexity = O(1)

bool checkPalindrome(int n){
    int x = n, rev = 0;
    while(x!=0){
        rev = rev*10 + x%10;
        x/=10;
    }
    if(rev==n) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    if(checkPalindrome(n)){
        cout << n << " is a Palindrome Number";
    }else{
    cout << n <<" is not a Palindrome Number";
    }
}