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

class student:public person{
    public:
    int student_id;
    student(string name,int age,int student_id) : person(name,age){
        this->student_id=student_id;
    }
    void print_student(){
        cout << "name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "student_id :" << student_id << endl;
    }

};

class graduate:public student{
    public:
    string degree;
    graduate(string name,int age ,int student_id,string degree): student(name,age,student_id){
        this->degree=degree;
    }

    void display(){
        cout << "name :" << name<< endl;
        cout << "age :" << age << endl;
        cout << "degree :" << degree << endl;
    }
};








int main(){

    student s1("john",20,49876);
    s1.print_student();
    graduate g1("alice",24,75452764,"MSc");
    g1.display();


}