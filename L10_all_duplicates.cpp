#include<iostream>
using namespace std;
//given an integer array  num of length n where all integers on array are in the range 1 to n and each integer appaears once or twice.
//find the integers that are found twice. return an array of strings that appear twice.
void duplicate(int arr[], int size)
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
    for (int i=1;i<=size;i++)
    {
        answer=answer^i;
        cout << answer;
    }}
    
int main ()
{
    int arr[100];
    int size;
    duplicate( arr, size);

}