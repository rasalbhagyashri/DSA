#include<iostream>
#include <math.h>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for (int i=1; i<=n;i++)
    {
        fact= fact*i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int ans=1;
    ans= factorial(n)/(factorial(r)*factorial(n-r));
    return ans;

}
int main()
{
    int a,b;
    cout << " enter the value of n and r:"<<endl;
    cin >>a >> b;
    int answer= nCr(a,b);
    cout <<" the nCr is: "<< answer;

}