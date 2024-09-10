#include<iostream>
using namespace std;
int setbits(int a, int b)
{
    int count=0;
    while(a!=0){
    if (a&1)
    {
        count++;
        a=a>>1;
        
    }
    }
    while (b!=0){
        if (b&1)
    {
        count++;
        b=b>>1;
        
    }
    }
    return count;
    
}

int main()
{ int c,d;
 cout << " enter the value of a and b:"<< endl;
 cin >> c>> d;
 int bits=setbits(c,d);
 cout << bits;

}