#include<iostream>
#include<string>

using namespace  std;
class bankaccount{
    private:

    int account_number;
    double balance;
    static int totalaccounts;

    public:
    bankaccount(int account_number, double balance){
        this->account_number=account_number;
        this->balance=balance;
        totalaccounts++;
    }

    void diposit(double amount){
        balance+=amount;
    }
    void print(){
        cout << "account no :"<< account_number << " " << "balance : " << balance << endl;

    }

    static void howmanyaccount(){
        cout << "total accounts created : " << totalaccounts << endl;
    }




};
int bankaccount :: totalaccounts=0;


int main(){
    bankaccount b1(8646783,500000.0);
    bankaccount b2(7653984,764879.0);
    bankaccount b3(89645980,97756.0);
    b1.print();
    b2.print();
    b3.print();


    bankaccount::howmanyaccount();

}