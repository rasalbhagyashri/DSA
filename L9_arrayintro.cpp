#include <iostream>
using namespace std;
void ARRAY (int array[], int size)
{
 for (int i=0;i<12;i++)
    {
        cout << array[i]<< endl;
        
    }
    cout << "printing done "<< endl;
}
int main ()
{
    /*int array[12]={2,7};
    for (int i=0;i<12;i++)
    {
        cout << array[i]<< endl;
    }*/
   int hello[]={1,2};
    ARRAY( hello, 10);
    int size=sizeof(hello)/sizeof(int);
    cout<< size<< endl;
}