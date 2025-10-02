#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;

    person(string name,int age){
        this->name=name;
        this->age=age;
    }
};

class student: public person{
    public:
    int student_id;
    student(string name,int age,int student_id) : person(name, age){
        this->student_id=student_id;
    }

    void display(){
        cout << "name " << name << endl;
        cout << "age " << age << endl;
        cout << "student_id " << student_id << endl;    }
};


int main(){
    student s1("john",20,202);
   
    s1.display();
    return 0;
}