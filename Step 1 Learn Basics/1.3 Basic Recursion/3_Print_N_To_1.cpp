#include <bits/stdc++.h>
using namespace std;

// T = O(n)
void print_N_to_1(int i, int n){
    if(i < 1) return ;
    cout << i <<" ";
    print_N_to_1(i-1,n);
}

int main(){
    int n;
    cin >> n;
    print_N_to_1(n,n);
}