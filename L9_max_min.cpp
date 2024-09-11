#include <iostream>
using namespace std ;
int getmax(int num[],int n)
{ 
    int a= INT_MIN;
    for (int i=0;i<n;i++)
    {
        a=max(a,num[i]);
       /*if (num[i]>a)
       {
        a=num[i];
       }*/
       
    }
    return a;

}

int getmin(int num[],int n)
{ 
    int b= INT_MAX;// range vale
    for (int i=0;i<n;i++)
    {
        b=min(b,num[i]);
       /*
       if (num[i]<min)// to check whether the items in the given array are less then the refernce max value
       {
        min=num[i];
       }*/
      
    }
     return b;

}





int main()
{
  int size;
  cin>>size;
  int num[100];
  for (int i=0;i<size;i++)
  {
    cin>> num[i];
  }
   cout << "max value in array is "<< getmax( num, size)<< endl;
   cout << "min value in array is "<< getmin( num, size);


}