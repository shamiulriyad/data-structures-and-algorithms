#include<iostream>
#include<string>

using namespace std;
class person{
    public:
    string name;
    int age;
    person(){
        cout << "defolt constructor print" << endl;
    }
    person(string name,int age){
        cout << "peramiter constructor print "<< endl;
        this->name=name;
        this->age=age;
    }

};

int main(){
    person p1;
    person p2("john",20);

}