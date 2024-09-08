#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << " enter n"<< endl;
    cin >> n;
    int count = 0;
    while (n!=0)
    {
        //checking the last bit by anding it with 1 and then right shift
        if (n&1)
        {
            count++;
            
        }
        n=n>>1;//right shift
        
    }


cout << count;












    
}