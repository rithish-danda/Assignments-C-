// a23 10
#include <iostream>
using namespace std; 
int main()
{
    int a[10],sum=0;
    cout << "Input 10 integers into the array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    cout << "The sum of the elements in the array is : " << sum;
    return 0;
}
