#include <iostream>
using namespace std;
int main ()
{
     char operation;
    
    cout <<" enter the type of arithemative operation you desire to perform:";
    cin >> operation;
    int a;
    cout<< " enter the value of a";
    cin >> a;
    int b;
    cout<< " enter the value of b";
    cin >> b;
int ans=0;
    switch(operation)
      {
        case '+': {ans=a+b;
        cout << " sum of a and b is "<<ans;
        break;}
        case '-':
        {
            ans=a-b;
            cout << "difference of a and b is "<< ans;
        break;
        }
        case'*':
        {
        ans= a*b;
        cout << "multication of a and b is "<< ans;
        break;}
        case'%':
        {
            if (b!=0)
            {
                ans= a % b;
                cout<< "remainder of a/b is"<< ans;
                
            }
            else {
                cout<< " enter a valid input of b ";
            }
            break;
        }
        case'/':
        {
            if (b!=0)
            {
                ans= a/b;
                cout<< "quotient of a/b is"<< ans;
                
            }
            else {
                cout<< " enter a valid input of b ";
            }
            break;
        }

        default: cout<< "Please enter a valid operation";

    }
    
}