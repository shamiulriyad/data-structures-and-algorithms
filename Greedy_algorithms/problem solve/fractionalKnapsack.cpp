#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Item{
    string name;
    float price;
    float weight;
    float price_per_kg;
    float portionTaken;
    Item(string name,float price, float weight){
        this->name=name;
        this->price=price;
        this->weight=weight;
        this->price_per_kg = price/weight;
    }
};

bool comparator(Item a,Item b){
    if(a.price_per_kg>b.price_per_kg){
        return true;
    }else{
        return false;
    }

}

void FractionalKnapsack(vector <Item> itemsVector ,float C, int n){
    vector <Item> collectedItemsVector;
    sort(itemsVector.begin(),itemsVector.end(),comparator);
//    cout<<"Sorted items"<<endl;
//    for(Item item: itemsVector){
//        cout<<item.name<<"-"<<item.price<<"-"<<item.weight<<"-"<<item.price_per_kg<<"\n";
//
//    }

    int i = 0;
    float profit = 0;

    while(C>0 && i<=n){
        if(C>itemsVector[i].weight){
            C=C-itemsVector[i].weight;
            profit = profit + itemsVector[i].price;
            itemsVector[i].portionTaken=1;
            collectedItemsVector.push_back(itemsVector[i]);
        }else{
            profit = profit + C*itemsVector[i].price_per_kg;
            itemsVector[i].portionTaken= C/itemsVector[i].weight;
            C=0;
            collectedItemsVector.push_back(itemsVector[i]);
        }
        i++;
    }

    cout<<"Selected Items"<<endl;
    cout<<"Sorted items"<<endl;
    for(Item item: collectedItemsVector){
        cout<<item.name<<"-"<<item.price<<"-"<<item.weight<<"-"<<item.price_per_kg<<"- portion Taken:"<<item.portionTaken<<"\n";
    }
    cout<<"Total profit"<<profit<<endl;
}


int main(){
    float C;
    int n;

    cout<<"Enter the number of items and the capacity of your bag"<<endl;
    cin>>n;
    cin>>C;

    cout<<"Enter the item info (name,price,weight)"<<endl;
    vector <Item> itemsVector;

    for(int i=1;i<=n;i++){
        string name;
        float price,weight;
        cin>>name;
        cin>>price;
        cin>>weight;
        Item item(name,price,weight);
        itemsVector.push_back(item);
    }

    for(Item item: itemsVector){
        cout<<item.name<<"-"<<item.price<<"-"<<item.weight<<"-"<<item.price_per_kg<<"\n";

    }
    FractionalKnapsack(itemsVector ,C, n);
    return 0;
}

/*
7 15
item1 10 2
item2 5 3
item3 15 5
item4 7 7
item5 6 1
item6 18 4
item7 3 1
*/
