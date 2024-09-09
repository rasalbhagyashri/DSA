#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n ;
    cin>> n ;
    bool power=0;

    if (n==1)
    {
        cout << "power of 2";

    }
    while (n!=1)
    {
        if (n%2!=0)// this checks the remainder whether it is zero or not 
        {
            power =0;
            break;
        }
        n=n/2; // to divide the given numver by 2 to check whether divided number gives the remainder 0
        power =1;
    }
    if (power)
    {
        cout << "power of 2";

    }
    else {
        cout << "not a power of 2";
    }
}