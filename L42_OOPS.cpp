#include <iostream>
using namespace std;
class hero{

    private:
    int health;
    public:
    char level;

    //default or non parameterised constructor
    hero()
    {
        cout << " default constructor is called "<< endl;

    }
    //parameterized constructor
    hero(int health, char level)
    {
        cout << "this ->"<< this<< endl;
        this->health=health;
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
    //static allocation
    hero ramesh;
    cout <<"address of ramesh is "<< &ramesh<<endl;
    ramesh.print();


    //dynamic allocation 
    //int *i=new int 
    //hero *b =new hero(11);
    //cout << " healht is"<< (*b).gethealth()<< endl;
    //h->print();
    hero temp(22,'B');
    temp.print();








    return 0;
}