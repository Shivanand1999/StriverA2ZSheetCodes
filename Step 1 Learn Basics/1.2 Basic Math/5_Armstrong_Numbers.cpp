#include <bits/stdc++.h>
using namespace std;

// T = O(n), S = O(1)
bool checkArmstrong(int n){
    int originalNum = n;
    int temp = n;
    int numSize = 0;
    //to find number of digits
    while(temp!=0){
        numSize++;
        temp/=10;
    }

    int sumOfPower = 0;
    while(n!=0){
        int digit = n%10;
        sumOfPower += pow(digit, numSize);
        n/=10;
    }
    return (sumOfPower==originalNum);
}


int main(){
    int num;
    cin >> num;
    if(checkArmstrong(num)){
        cout << "Yes, it is an Armstrong Number";
    }else{
        cout << "No, it is not an Armstrong Number";
    }
}