#include <bits/stdc++.h>
using namespace std;

/* T = O(n), S = O(1)
void printAllDivisors(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
}
*/

// T = O(sqrt(n)), S = O(1)
void printAllDivisors(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout << i << " ";
            if(i != n/i) cout << n/i << " ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    printAllDivisors(n);
}