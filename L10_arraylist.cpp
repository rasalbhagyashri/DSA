#include <iostream>
using namespace std;
//you have a array of size n where n is equal to 2m+1. number m exist twice and one number is present only once. find that one number
// ex; [ 2 4 4 2 6 7] so in this array we need to return ans as 7 as it only occurs once 
/*
int  num(int arr[], int size, int query)
{
    int  answer;
    for (int i=0;i<query;i++)
    {
        for (int j=0;j<size;j++)
        {
            answer=answer^arr[i];
        }
    }
    return answer;
}
void input(int arr[], int size)
{
    for (int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
}
int main ()
{
    int query;
    cin >> query;
    int size;
    cin >> size;
    int arr[]={};
    input(arr,size);

    int found = num(arr, size, query);
    cout << found;

}*/
int solution(int arr[],int size , int query)
{
    
    cin >> query;
    

    int answer=0;
    for (int j=0;j<query;j++)
    {
        
    cin >> size ;


    for (int i=0; i<size;i++)
    {
        cin>> arr[i];
    }
      

      for (int k=0; k<size; k++)
      {
        answer=answer^arr[k];
      }
      
    }
return answer;

}
int main()
{
    int arr[]={};
    int size;
    int query;
    int ans=solution(arr,size,query); 
    cout << ans;
   


}