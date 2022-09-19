#include <bits/stdc++.h>
using namespace std;

// T = O(n), S = O(n) 
void printName(int i, int n){
    if(i>n) return ;
    cout << "Shivanand" << endl;
    printName(i+1,n);
}

int main(){
    int n;
    cin >> n;
    printName(1,n);
}