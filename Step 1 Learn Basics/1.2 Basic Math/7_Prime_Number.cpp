#include <bits/stdc++.h>
using namespace std;

/* T = O(n), S = O(1)
bool isPrime(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

*/

// T = O(sqrt(n)), S = O(1)
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cin >> n;
    if(isPrime(n)) cout << n << " Is Prime";
    else cout << n << " Is not Prime";
}