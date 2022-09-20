#include <bits/stdc++.h>
using namespace std;

/* Iteration solution T = O(N)
void sumOfNnumbers(int n){
    int res=0;
    for(int i=1;i<=n;i++){
        res+=i;
    }
    cout << res;
}
*/

/* By Formula T = O(1)
void sumOfNnumbers(int n){
    int res = n * (n+1) / 2;
    cout << res;
}
*/

/*
Parameterized Recursion: T = O(n), S = O(n)
void sumOfNnumbers(int n, int sum){
    if(i<1){
        cout << sum;
        return ;
    }
    sumOfNnumbers(i-1,sum);
}
*/

// FUNCTIONAL RECURSION: T = O(n), S = O(n)
int sumOfNnumbers(int n){
    if(n==0) return 0;
    return n + sumOfNnumbers(n-1);
} 


int main(){
    int n;
    cin >> n;
    cout << sumOfNnumbers(n);
}