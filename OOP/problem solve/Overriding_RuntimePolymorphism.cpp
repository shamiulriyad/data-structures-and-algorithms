#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {   // overriding
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal a;
    a.sound();
    Dog d;
    d.sound();   // Dog barks (child class version)
}
