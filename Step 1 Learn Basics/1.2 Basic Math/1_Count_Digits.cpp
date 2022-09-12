#include<bits/stdc++.h>
using namespace std;

/*
Solution in Time Complexity: O(1), Space Complexity: O(1)

int count_digits(int n){
    int x=n;
    int count=0;
    while(x!=0){
        x=x/10;
        count++;
    }
    return count;
}

*/

/*
Solution in Time Complexity: O(1), Space Complexity: O(1)

int count_digits(int n){
    string x = to_string(n);
    return x.length();
}

*/

// Solution in Time Complexity: O(1), Space Complexity: O(1)
int count_digits(int n){
    int digits = floor(log10(n) + 1);
    return digits;
}

int main(){
    int n;
    cin >> n;
    cout << "Number of Digits:" << n << " is " << count_digits(n);
    return 0;
}