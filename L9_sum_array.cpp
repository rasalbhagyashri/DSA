#include<iostream>
using namespace std;
int sum(int num[], int size)
{
    int i=0;
    int sum=0;
    for (i=0;i<size;i++)
    {
        sum=sum+num[i];
    }
    return sum;
}
int main ()
{ 
    int size;
    cin>> size;
    int num[10];
    for (int i=0;i<size;i++)
    {
        cin>>num[i];
    }
     cout << " sum of all the elemnts in the array is:"<< sum(num, size);


   
}