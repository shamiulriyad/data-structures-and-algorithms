#include <bits/stdc++.h>
using namespace std;

class itemname{
    public:
    string name;
    itemname(string name){
        this->name=name;
    }
};

class item{
    string name;
    double weight;
    double price;
    double price_per_kg;
    double portiontaken;

    item(string name,double price,double weight){
        this->name=name;
        this->price=price;
        this->weight=weight;
        this->price_per_kg=price/weight;
        this->portiontaken=0.0;
    }
};

bool compire(item a,item b){
    return a.price_per_kg>b.price_per_kg;
}

void fractionknapsak(vector<item>&item,double capacity){
    sort(items.begin(),items.end(),compire);
    double totalprofit=0.0;



}




int main(){
    int n;
    double capacity;
    cin >> n >> capacity;

    vector<Item> items;

    for(int i=0;i<n;i++){

    }
}`