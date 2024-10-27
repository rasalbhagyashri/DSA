#include <iostream>
#include <cstring>
using namespace std;
class hero {
    private :
    int health;
    public :
    char *name;
    char level;
    hero ()
    {
        cout << " simple constructor called"<< endl;
        name = new char[100];
    }
    hero (int health)
    {
        this ->health =health;
    }
    hero(int health , char level){
        this-> level=level;
        this ->health=health;
    }
    hero(hero& temp)
    { //deep copy 
        char *ch= new char [strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name=ch;
        cout << " copy constructor is called "<< endl;
        this ->health=temp.health;
        this ->level=temp.level;

    }
     void print (){
        cout << level ;
        cout << name ;
        cout << health<< endl;

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
    void setname(char name[])
    {
        strcpy(this-> name, name);
    }

};
int main()
{
    hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[11] = "Bhagyashri";
    hero1.setname(name);
    hero1.print();
//use default constructor 
    hero hero2(hero1);
    hero2.print();
    //char name[2]= "r";
    hero2.print();
    return 0;
}