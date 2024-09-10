#include<iostream>
using namespace std;
int fibonacci(int n)
{
    int a=0;
    int b=1;
    int next_number;
    for (int i=1;i<=n;i++)
{
    next_number=a+b;
    cout << next_number<<" ";
    a= b;
    b= next_number;
}
  
    return next_number;
}
int main()
{
    int a;
    cin >> a;
    int ans= fibonacci(a);
    cout<< ans;
}