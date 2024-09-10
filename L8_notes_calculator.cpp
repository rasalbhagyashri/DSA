#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the amount:"<< endl;
    cin >> n;
    int type;
    cout<<" enter the maximun currency u want(100,50,20,1)"<< endl;
    cin>> type;

    int notes=0;
    
    switch(type)
    {
        case 100: 
        {if (n>100)
        {
            
            notes=n/100;
            cout<< "100 ke notes: "<< notes<< endl;
            n=n%100;
        }
        }
        case 50:
        {
            if (n>50)
            {
                notes=n/50;
                cout<< " 50 ke notes:"<< notes<<endl;
                n=n%50;

            }
            
            }

        case 20:
        {
            if (n>20)
            {
                notes=n/20;
                cout<< " 20 ke notes:"<< notes<<endl;
                n=n%20;

            }

        }

        case 1:
        {
            if (n>1)
            {
                notes=n/1;
                cout << " kitne ek rupay:"<< notes<< endl;
                break;
            }
        }

    
    
    
    
    
    
    
    
    
    
    
    }



}