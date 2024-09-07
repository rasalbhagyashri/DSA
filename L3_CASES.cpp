#include <iostream>
using namespace std ;
int main ()
{
    int a;
    cin>> a;
    if (a>65 && a<90){
        cout << "UPPERCASE";
    }
    else if (a>97 && a<122){
        cout<< "LOWERCASE";
    }
    else {cout<< "number";
    }
}