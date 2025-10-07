#include<iostream>

#include<string>

using namespace std;

 class car{
    private:
    int speed;
    int hp;

    public:

    // non_parameterized constructor
    car (){
        cout << "default constructor called" << endl;
    }

    car(string b,string m,string c){
        brand_name=b;
        model_name=m;
        color=c;

    }
    //copy constructor
    car(car &x){

        cout << " custom copy constractor called" << endl;
        brand_name=x.brand_name;
        model_name=x.model_name;
        color=x.color;

    }

        string brand_name;
        string model_name;
        string color;
        void get_info(){
            cout << "Brand name is :" << brand_name << endl;
            cout << "Model naem is :" << model_name << endl;
            cout << "color is : " << color << endl;
        }

    };


int main(){
   car car1("buggati","chiron","black");
   //car1.get_info();
   car car2(car1);  // custom copy constructor-invoked

   car2.get_info();

   


}


