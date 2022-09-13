// a24 03
#include<iostream>
using namespace std;
int power(int n,int p){
    if (p==0)
        return 1;
    if(p==1)
        return n;
    for(int i=2;i<=p;i++){
        n = n*n;
    }
    return n;
}
int main(void){
    int num,p;
    cout << "Input the number: ";
    cin >> num;
    cout << "Power: ";
    cin >> p;
    int x = power(num,p);
    cout << num << " raised to the power " << p << " is " << x;
    return 0;
}
