#include <bits/stdc++.h>
using namespace std;

// T = O(n/2)
bool stringIsPalindrome(int i, string &s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return stringIsPalindrome(i+1, s);
}

int main(){
    string str;
    cin >> str;
    if(stringIsPalindrome(0,str)) cout << "True";
    else cout << "False";
}