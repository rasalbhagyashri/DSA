#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n ;
    cin >>n;
   
    bool powerof2=0;
    for ( int i=0;i<=30;i++)
    {   
        int ans= pow(2,i);
        
        if (ans==n)
    {
        powerof2 = 1;
        break;
    }
       
}
 if (powerof2)
        {cout << "power of 2";}
        else { cout<< "not a power of 2";
        }
    }