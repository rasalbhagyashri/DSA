#include <iostream>
using namespace std ;
int duplicate(int arr[], int size)
{
    cin >> size;
    for (int i=0;i <size;i++)
    {
       cin >> arr[i];
    }

    int answer=0;
    for (int i=0;i<size;i++)
    {
        answer=answer^ arr[i];
    }
    for (int i=1;i<size;i++)
    {
        answer=answer^i;
    }
    return answer;
}
int main ()
{
    int arr[100];
    int size;

    int soln = duplicate(arr,size);

    cout << soln<< endl;;

}