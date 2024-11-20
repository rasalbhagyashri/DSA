#include <iostream>
using namespace std ;
void  display(int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << j<<endl;
        }
    }
}
int main ()
{
    display(10);
    return 0;
}