#include <iostream>
using  namespace std ;
int main()
{
    int n;
    cin >> n;
    int a=0;// input for first two numbers of fibo series 
    int b=1;
     cout << a<< " "<< b <<" ";
int i=1;
for (i=1;i<=n;i++)
{
    int next_number=a+b;//generation of fibonacci series
    cout << next_number<<" ";
    a= b;
    b= next_number;
}
     

}
