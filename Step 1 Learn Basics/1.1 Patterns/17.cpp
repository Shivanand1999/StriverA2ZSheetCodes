#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        char c = 'A';
        for(int j=n;j>i;j--){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << c++;
        }
        --c;
        for(int j=1;j<i;j++){
            cout << --c;
        }
        cout << endl;
    }
}


/*

For N = 5 Output should be:

      A
     ABA
    ABCBA
   ABCDCBA
*/