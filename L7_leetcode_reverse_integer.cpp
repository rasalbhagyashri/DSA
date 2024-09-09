#include <iostream>
#include<math.h>
using namespace std ;
int main()
{
 int n ;
 cin >> n ;
 int ans =0;
 int MIN= -pow(2,31);
 int MAX=pow(2,31)-1;
 while (n!=0)
 {
    int digit = n%10;
    if ((ans>MAX/10)|| (ans<(MIN/10)))
    {
        cout << "0";
    }
    
    ans=(ans*10)+digit;
    n=n/10;
 }
 cout << ans;
}