#include<bits/stdc++.h>
using namespace std;

//To find HCF of two numbers

// T=O(logQ min(a,b)) where Q=1.61,  S=O(1)
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main(){
    int n1,n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;


    cout << "The GCD of the two numbers is "<<gcd(n1,n2);

}



/*
BRUTE FORCE - T= O(N) , S= O(1)

    int res;
    for(int i=1; i<= min(n1,n2);i++){
        if (n1 % i == 0 && n2 % i == 0) {
			res = i;
		}
    }

*/