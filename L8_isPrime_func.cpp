#include<iostream>
using namespace std;
//0 is not prime ;
//1 is prime 
bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            return 0;
        }
       
    }
    return 1;
}
int main ()
{
    int a;
    cout << "Enter the value of n:"<< endl;
    cin >> a;
    int ans= isprime(a);
    cout << ans<< endl;
}