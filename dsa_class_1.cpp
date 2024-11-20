#include <iostream>
using namespace std ;
void display (int n)
//time complexity is O(n+n)=O(2n)=O(n)
//this is for independent loops 
{ 
    for (int i=0;i<n;i++)
    {
        cout<< i << endl;
        }
    for (int j=0;j<n;j++)
    {
        cout <<j<< endl;
    }
}
int main ()
{
    display(10);
    return 0;
}