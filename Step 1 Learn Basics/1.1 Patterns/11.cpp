#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int temp = 1;
    for(int i=1;i<=n;i++){
        if(i%2==0) temp = 0;
        else temp = 1;
        for(int j=1;j<=i;j++){
            cout << temp << " ";
            if(temp==1) temp = 0;
            else temp = 1;
        }
        cout << endl;
    }
}


/*

For N = 5 Output should be:

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/