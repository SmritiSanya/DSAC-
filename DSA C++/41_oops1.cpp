#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

class Hero {
    //properties
    private:
        int health; // 4 bytes for this

    public:
        char *name; // 100 bytes for this

        char level; // 1 byte for this
        // but size=108 because we add padding of 3 bytes to align the object size to a multiple of 4 bytes
        // empty class: 1 byte of memory

        static int timeToComplete;

        //constructor
        Hero(){
            cout<<"Constructor is called"<<endl;
            name= new char[100];
        }

        //parameterised constructor
        Hero(int health){
            cout<<"this -> "<<this<<endl;
            this->health=health;
        }

        Hero (int Health, char Level){
            this->health=health;
            this-> level=level;

        }

        //copy constructor
        Hero (Hero& temp){
            char *ch=new char[strlen(temp.name)+1];
            strcpy(ch,temp.name);
            this->name=ch;
            this->health=temp.health;
            this->level=temp.level;
        }

        // Getter for health
        int getHealth() {
            return health;
        }

        // Getter for level
        char getLevel() {
            return level;
        }

        // Setter for health
        void setHealth(int h) {
            health = h;
        }

        // Setter for level
        void setLevel(char ch) {
            level = ch;
        }

        //Setter for name
        void setName(char name[]) {
            strcpy(this->name,name);
        }

        void print(){
            cout<<"health: "<<this->health<<endl;
            cout<<"level: " <<this->level<<endl;
            cout<<"name: "<<this->name<<endl;
        }
        ~Hero(){
            cout<<"Destructor called"<<endl;
            
        }

        static int random(){
            //cout<<health<<endl; //error //can access only static members
            return timeToComplete;
        }

};

//static
int Hero :: timeToComplete = 5;


int main() {
    cout<<Hero:: timeToComplete<<endl;

    Hero a; //not necessary
    cout<<a.timeToComplete<<endl;

    Hero b;
    b.timeToComplete=10;
    cout<<a.timeToComplete<<endl;
    cout<<b.timeToComplete<<endl;

    /*
    //static
    Hero a;

    //dynamic
    Hero *c=new Hero;
    //manually destructor call
    delete c;
    */

    /*

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7]="Smriti";
    hero1.setName(name);
    hero1.print();
    cout<<endl;

    //use default copy constructor->shallow

    Hero hero2(hero1);
    hero2.print();
    // Hero hero2= hero1;

    cout<<endl;

    hero1.name[0]='I';
    hero1.print();
    cout<<endl;
    hero2.print();
    */


    /*
    Hero suresh(70,'C');
    suresh.print();

    //Copy Constructor
    Hero ritesh(suresh);
    ritesh.print();
    */


    /*
    // Creation of object
    //static allocation
    Hero ram;

    //dynamically
    Hero *b=new Hero;

    ram.setHealth(70);
    ram.setLevel('A');

    cout << "Ram's health is: " << ram.getHealth() << endl;
    cout << "Ram's level is: " << ram.getLevel() << endl;

    cout<<endl<<endl;

    b->setHealth(80);
    b->setLevel('B');
    cout << "health is: " << (*b).getHealth() << endl;
    cout << "level is: " << (*b).getLevel() << endl;

    
    // Output the size of the object
    cout << "Size of ram object: " << sizeof(ram) << endl;

    Hero ramesh(10);
    cout<<"Address of Ramesh: "<<&ramesh<<endl;


    // The following lines are commented out because accessing private members directly is not allowed:
    // cout << "health is: " << ram.health << endl;
    // cout << "level is: " << ram.level << endl;
    */

    return 0;
}
