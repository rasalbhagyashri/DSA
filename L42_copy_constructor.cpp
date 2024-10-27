#include <iostream>
using namespace std;
class hero{

    private:
    int health;
    public:
    char level;

    hero(int health, char level)
    {
        cout << "this ->"<< this<< endl;
        this->health=health;
    }
   hero(hero& temp)
   {
    cout << " copy constructor is called " <<endl;
    this-> health =temp.health;
    this-> level = temp.level;
   }
    void print (){
        cout << level << endl;

    }
     
     int gethealth()
     {
        return health;
     }
     char getlevel()
     {
        return level;
     }
     void sethealth(int h)
     {
        health=h;

     }
     void setlevel(char ch)
     {
        level=ch;
     }

};
int main ()
{
    hero s(70, 'c');
    s.print();

    //copy constructor
    hero r(s);
    r.print();
    return 0;
}