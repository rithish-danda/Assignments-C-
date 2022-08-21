// a23 08
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Input any two variables: ";
    cin >> a >> b;
    cout << "Before Swap: " << a << "\t" << b << endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout << "After Swap: " << a << "\t" << b;
}
