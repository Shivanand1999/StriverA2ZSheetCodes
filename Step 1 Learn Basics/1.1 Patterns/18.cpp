#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int c = 65+n-1;
        for(int j=i-1;j>=0;j--){
            int res = c-j;
            cout << (char) res << " ";
        }
        cout << endl;
    }
}


/*

For N = 5 Output should be:

 E
 D E
 C D E
 B C D E
 A B C D E

*/