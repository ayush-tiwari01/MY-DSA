#include <iostream>
using namespace std;
class hero
{

public:
    char level;
    int health;
     static int timetocomplete;
    //copy constructor
    // hero(int health)
    // {
    //     cout<<"this ->"<<this<<endl;
    //     this->health=health;
    //     cout << "constructor is called" << endl;
    // }
    // hero(int health, char level){
    //     this->level =level;
    //     this->health=health;
    // }
    void print(){
        cout<<level<<endl;
        cout<<health<<endl;
    }
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    int sethealth(int h)
    {
        health = h;
    }
    char setlevel(char ch)
    {
        level = ch;
    }
    ~hero(){
        cout<<"hello i am deconstructor"<<endl;
    }
};
int  hero::timetocomplete=5;
int main()
{

    cout<<hero::timetocomplete<<endl;
    // hero a();
    // hero *b=new hero();
    // delete b;



    // cout << "bhai hello" << endl;
    // hero ramesh(10,'A');
    // cout<<"Address of the ramesh: -"<<&ramesh<<endl;
    // cout<<"health is "<<ramesh.health<<endl;
    // cout << "bye bhai" << endl;

    // hero *b= new hero(10);
    // //copy constructor 

    // hero r(ramesh);
    // cout<<"print kar bhai"<<endl;
    // r.print();

    /*
    //copy constructor
    
    //static allocation
    hero h1;

    h1.setlevel('b');
    h1.sethealth(90);
    cout<<"level is"<<h1.level<<endl;
    cout<<"health is "<<h1.gethealth()<<endl;

    //dynamic allocation
    hero *b=new hero;
    b->setlevel('A');
    b->sethealth(80);
    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).gethealth()<<endl;

    //another type to access
     cout<<"level is "<<b->level<<endl;
    cout<<"health is "<<b->gethealth()<<endl;

    //when no properties is initilise in the class and the size of class is 1;
    //cout<<"size of class: "<<sizeof(h1);
    // cout<<h1.gethealth();
    */
}