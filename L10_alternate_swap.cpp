#include<iostream>
using namespace std;
void altswap( int arr[], int size)
{
    int i=0;
     for (i=0;i<size;i+=2)
     {
        if (i+1< size)
       
       {         swap(arr[i],arr[i+1]);

    
       }
}
       
}
void print(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout << arr[i]<< " ";
    } 
    cout << endl;
}
int main()
{
    int arr[6]={1 , 2, 3, 4, 5, 6};
    int brr[5]={9,8,7,6,5};

    altswap(arr,6);
    altswap(brr,5);

   print(arr,6);
   print(brr,5);

}