#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //given input n give difference of the product and sum
    int n;
    cin>> n;
    int sum=0;
    int product=1;
    while (n!=0)
    {
        int digit= n % 10;//getting the last digit og the given number
        product=product*digit;
        sum=sum+digit;

        n=n/10;//making the 3 digit number to 2 digit ex: 234 becomes 23 

    }
    int answer= product -sum;
    cout<< product<< " "<< sum << " "<< answer;

}