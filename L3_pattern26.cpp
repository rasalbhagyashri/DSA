#include <iostream>
using namespace std;
 int main()
 {
    int n;
    cin >> n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=(n-i+1))
        {
            cout<< j;
            j=j+1;
        }
        while(j<=n)
        {
            cout<< "**";
           j=j+1;

        }
        int num =n-i+1;
        while (j<=((2*n)-i+1))
        {
            cout <<num;
            num--;
            j=j+1;
            }
         cout << endl;
        i=i+1;
    }
 }