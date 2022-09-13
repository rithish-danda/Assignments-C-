// a24 05
#include<iostream>
using namespace std;
bool isFib(int n){
    int f1=0,f2=1,f3;
    f3=f1+f2;
    if(n==0 || n==1)
        return true;
    for(int i=1;i<n;i++){
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    if(n==f3)
        return true;
    else
        return false;
}
int main(void){
    int num;
    cout << "Input a number: ";
    cin >> num;
    if(isFib(num))
        cout<<num<<" is in the Fibonacci series";
    else
        cout<<num<<" is not in the Fibonacci series";
    return 0;
}
