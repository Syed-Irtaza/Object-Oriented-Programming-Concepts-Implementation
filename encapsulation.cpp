#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int grade;
    int age;
    public:
    int getAge(){
        return this->age;
    }
};

int main(){
    Student one;
    return 0;
}
