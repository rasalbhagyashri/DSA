#include <iostream>
using namespace std ;
bool isEven(int a)
{
    cin >> a;
   /* if (a%2==0){
        return 1;
        }
    else {
        return 0;
    }
    */
   if (a&1)
   {
    return 0;//odd
   }
 
    return 1;//even
   
}

int main(){
    int c;
 int ans = isEven(c);
 cout << ans;

}