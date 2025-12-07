#include<iostream>
using namespace std;


//parent class
class human{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this->age;
    }
    void setWeight(int weight){
        this->weight=weight;
    }
};


//child class

class male:private human{
    public:
    string color;
    void Male_attacks(){
        cout<<"Male by default are ruling specie"<<endl;
        // this->age;private in superclass so not accessible in child class
    }
    int getAge(){
        return this->age;
    }
};

int main(){
    
//     male m1;//m1 object of male (child) will also have properties and behavior of its parent alongside its own props and behavior.

//    cout<<m1.age<<endl;
//    cout<< m1.color<<endl;
//    cout<< m1.height<<endl;
//    cout<<m1.weight<<endl;
//    m1.Male_attacks();
//    m1.setWeight(85);
//    cout<<m1.weight<<endl;

male m2;
// m2.age;//inaccessible as the mode of inheritance we are using is protected which make public members that are inherited from parent(base class) become protected in male class (child class) after inheritance



// m2.age;age becomes private as over mode of inheritance is private

// m2.age; age is private in base parent class so it is inaccessible outside the class or even in the child class
    
// cout<<m2.getAge();if we inherit public data members using protected mode then that data members will become private members of child class (protected), and only accessible in child class not outside


}