#include <bits/stdc++.h>
using namespace std;

class item {
public:
    string name;
    double weight;
    double price;
    double price_per_kg;
    double portiontaken;

    item(string name, double price, double weight) {
        this->name = name;
        this->price = price;
        this->weight = weight;
        this->price_per_kg = price / weight;
        this->portiontaken = 0.0;
    }
};

bool compire(item a, item b) {
    return a.price_per_kg > b.price_per_kg;
}

void fractionknapsak(vector<item>& items, double capacity) {
    sort(items.begin(), items.end(), compire);

    double totalprofit = 0.0;

    for (auto& it : items) {
        if (capacity >= it.weight) {
            totalprofit += it.price;
            capacity -= it.weight;
        } 
        else {
            totalprofit += it.price * (capacity / it.weight);
            break;
        }
    }

    //cout << fixed << setprecision(2);
    cout << "Total Profit: " << totalprofit << endl;
}

int main() {
    int n;
    double capacity;
    cin >> n >> capacity;

    vector<item> items;
    string name;
    double price, weight;

    for (int i = 0; i < n; i++) {
        cin >> name >> price >> weight;
        items.push_back(item(name, price, weight));
    }

    fractionknapsak(items, capacity);
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