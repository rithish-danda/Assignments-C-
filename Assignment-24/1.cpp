// a24 01
#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<2)
        return false;
    for(int i=2 ; i<n/2 ; i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(void){
    int num,i;
    cout << "Input the number: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a Prime number";
    else
        cout << num << " is not a Prime number";
    return 0;
}
