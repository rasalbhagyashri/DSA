#include <iostream>
using namespace std ;
int main()
{
    int n;
    cin >> n;
    int i;
    bool isPrime= 1;
    for (i=2;i<n;i++)
    {
        if ((n%i)==0)
    {
        isPrime=0;
        break;
    }

    }
    if (isPrime==0)
    {cout << " n is not prime number";
    }
else {
    cout << " n is a prime number ";
}
}