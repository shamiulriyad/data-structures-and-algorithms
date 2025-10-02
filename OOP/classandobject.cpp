/*
                    classes & object:

objects are entities in the real world
example: pen, watch,chair,table,laptop,mobial,car etc;

class: classs is like a blueprint of these eentities

example: use this example ---> we know the brand of car is buggati,

we know this is car but we dont know whice model or color,or speed, or hp.


access modifire:privet,public,protected.


private: olny member function of the class can access the private data member.



*/

#include<iostream>

#include<string>

using namespace std;

 class car{
    private:
    int speed;
    int hp;

    public:

        string brand_name;
        string model_name;
        string color;

        // settr and gettr funtion use case: private data member access.
        void setspeed(int s){
            speed=s;

        }
        void sethp(int h){
            hp=h;
        }
        int getspeed(){
            return speed;
        }
        int gethp(){
            return hp;
        }

    };


int main(){
    car car1;
    car1.brand_name="buggati";
    car1.model_name="Chiron";
    car1.color="black";
    car1.setspeed(420);
    car1.sethp(1500);
    
    cout << "speed of car is : " <<  car1.getspeed() << "Km/h" << endl;

    car car2;
    car car3 ;
    car car4;
    car car5;
    car car6;
   


}