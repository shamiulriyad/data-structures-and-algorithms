#include<iostream>
#include<string>
using namespace std;


class student{
    public:
    string name;
    string dep;
    int id;
    
    //constructor
    student(string name,string dep,int id){
        this->name=name;
        this->dep=dep;
        this->id =id;
    }
    //destructor
    ~student(){
        cout << "free memory" << endl;
    }
    void print(){
        cout << "name :" << name << endl;
        cout << "dep :" << dep << endl;
        cout << "id :" <<  id << endl; 
    }

};
int main(){
    student s1={"Riyad","cse",01123};
    s1.print();

}
