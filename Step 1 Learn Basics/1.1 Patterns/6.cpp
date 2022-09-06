#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=n;i>0;i--){
        int cnt=1;
        for(int j=1;j<=i;j++){
            cout << cnt;
            cnt++;
        }
        cout << endl;
    }
}


/*

For N = 5 Output should be:

12345
1234
123
12
1

*/