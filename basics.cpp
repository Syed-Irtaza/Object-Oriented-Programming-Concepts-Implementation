#include<iostream>
#include<string.h>
using namespace std;
class Hero{
    //properties(attributes-data) of Hero class
    char level;
    public:
    char *name;
    int health;
    static int timeToComplete;

    //behaviour(methods-functions) of Hero class
    
    public:
    // int geHealth(){
    //     return health;
    // }

    //default constructor declared explicitly
    Hero(){
        cout<<"Hero constructor is called"<<endl;
        name =new char[100];
    }
    //parameterized constructor
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this->health=health;
    }
    //copy constructor
    Hero(const Hero &temp){
        //doing deep copy of pointer data members
        char *new_name=new char[strlen(temp.name)+1];//dynamic allocation of new_name by the size of object's name js ki copy kr rhy hn
    
        strcpy(new_name,temp.name);//store copied object's name into new_name

        this->name=new_name;// current name now has copied name of previous object with separate memory address

        cout<<"Copy constructor called"<<endl;
        this->level=temp.level;
        this->health=temp.health;
    }




    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }
    void setLevel(char l){
        level=l;
    }
    void setname(char name[]){
        strcpy(this->name,name);
        // we used this string function to store name in name data member by copying it otherwise we have to use loop(for or while for storing name)
    }
    void print(){

        cout<<"[ Level : "<<this->level<<" , ";
        cout<<"Health : "<<this->health<<" , ";
        cout<<"Name : "<<this->name<<" ] "<<endl;
    
    }
 
    static int random(){
        cout<<"static function : "<<timeToComplete<<endl;
    }


    ~Hero(){
        cout<<"Destructor called "<<endl;
    }

};

int Hero :: timeToComplete=5 ;