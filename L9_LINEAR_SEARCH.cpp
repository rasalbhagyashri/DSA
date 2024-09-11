#include<iostream>
using namespace std;
bool search(int arr[],int size ,int key)
{
    for (int i=0;i<size;i++)
    {
        if (arr[i]==key)
        {
        return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10]={1, 56,3 ,7,9,11,5,3,3,6};
    int key;
    cin >>key;
    bool found=search(arr, 10, key);
    if (found)
    {
        cout<< " Key given is present";
    }
    else {
        cout<<" key is absent!";
    }

}