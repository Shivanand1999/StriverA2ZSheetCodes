#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
}


/*

For N = 5 Output should be:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/