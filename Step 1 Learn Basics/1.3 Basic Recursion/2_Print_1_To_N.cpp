#include <bits/stdc++.h>
using namespace std;

// T = O(n)
void print_1_to_N(int i, int n){
    if(i > n) return ;
    cout << i <<" ";
    print_1_to_N(i+1,n);
}

//Backtracking:
/*
void print_1_to_N(int i, int n){
    if(i < 1) return ;
    print_1_to_N(i-1,n);
    cout << i <<" ";
}
*/
int main(){
    int n;
    cin >> n;
    print_1_to_N(1,n);
}