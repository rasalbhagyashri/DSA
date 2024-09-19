#include <iostream>
using namespace std;
//there are two arrays of m and n and we have to find the common values or intersection of both the arrays
int intersection( int arr[],int brr[], int n, int m)
{
    int element=0;
    for (int i=0; i<m;i++ )//loops for comparing
    { 
        for (int j=0;j<m;j++)
        { 
            if (element==brr[j])
            { 
                cout << element;
                brr[j]=-1;
                break;
            }
        }
    }
        return -1;
}

int  main()
{
    int n;
    cout << " enter the length of string 1:"<< endl;// taking input 
    cin>> n;
    
    int arr[100];
    
    cout << " enter the array 1"<< endl;
    for (int i=0;i<n;i++)
    {
        cin>> arr[i];
    }

    int m;
    cout << " enter the length of array 2:"<< endl;
    cin >> m;

    int brr[100];

    cout << " enter the array 2" << endl;
    for (int j=0;j<n;j++)
    {
        cin >> brr[j];
    }

    int ans = intersection(arr, brr, n, m);
    cout << ans;



}
