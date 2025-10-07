#include<iostream>

using namespace std;


class voter{
    double age;

    public:

    voter(double age){
        this->age=age;
    }
    void setage(double age){
        if(age>=18){
            cout << "valid" << endl;
        }
        else{
            cout<< "not valid" << endl;
        }
        this->age=age;
    }
    double getage(){
        return age;
    }

    void display(){
        cout << "age :" << age << endl;
    }
};

int main(){

    voter v1(10);
    v1.display();
    v1.setage(12);  
    cout << "Current Age: " << v1.getage() << endl;


}