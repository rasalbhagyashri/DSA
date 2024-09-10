#include<iostream>
using namespace std;
/*int power(int a, int b)//function is defined here
{ 
    int i;
    int ans=1;
    for(i=0;i<=b;i++)
{
    ans=ans*a;}
    return ans; // since int is a return type function we have returned ans here 
    
 
}*/

int power()
{
    int a,b;
    cin >> a >>b;
    int ans=1;
    for (int i=0; i<=b ;i++)
    {
        ans=ans*a;
        }
        return ans ;

    }


int main()
{/* naive approach
    int a, b;
    cin >> a >> b;
    int answer= power(a,b);// function call;
    cout << answer;
    return 0;
    */
   int ans= power();
   cout<< "answer is "<< ans;

}