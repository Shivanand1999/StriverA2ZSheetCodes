#include <bits/stdc++.h>
using namespace std;

// By Parameterized Recursion: T = O(n), S = O(n)
void factorial(int n, int fact){
    if(n==1){
        cout << fact;
        return ;
    }
    factorial(n-1,fact*n);
}

//By Functional Recursion: T = O(n), S = O(n)
int factorial(int n){
    if(n==1) return 1;
    return n * factorial(n-1);
}


int main(){
    int n;
    cin >> n;
    factorial(n,1);
    cout << endl;
    cout << factorial(n);
}