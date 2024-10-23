#include<iostream>
using namespace std;
int binarysearch(int arr[],int size, int key)
{
  int start=0;
  int end=size-1;
  int mid = start + (end - start )/2;
  while (start<=end)
  {
    if (arr[mid]==key)
    {
        return mid;
    }
    if (key>arr[mid])
    {
        start = mid+1;// to go to right part of the array
    }
    else {
        end = mid - 1;
        }
    mid = start + (end - start )/2;
    }
  return -1;
}
int main ()
{
    int even[6]={2, 4, 6, 8, 12,18};
    int odd[5]={3,7, 24, 56,78};
    int index= binarysearch(even, 6, 10);
    cout<< index << endl;
    int index_2 = binarysearch(odd,5,7);
    cout << index_2;
    return 0;
}