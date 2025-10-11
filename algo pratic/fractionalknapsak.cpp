#include <bits/stdc++.h>
using namespace std;

class ItemName {
public:
    string name;
    ItemName(string name) {
        this->name = name;
    }
};

struct Item {
    string name;
    double weight;
    double price;
    double price_per_kg;
    double portionTaken; // fraction taken

    Item(string name, double price, double weight) {
        this->name = name;
        this->price = price;
        this->weight = weight;
        this->price_per_kg = price / weight;
        this->portionTaken = 0.0;
    }
};

// Comparator: sort by price/weight ratio descending
bool compire(Item a, Item b) {
    return a.price_per_kg > b.price_per_kg;
}

void FractionalKnapsack(vector<Item>& items, double capacity) {
    sort(items.begin(), items.end(), compire);

    double totalProfit = 0.0;

    for(int i = 0; i < items.size() && capacity > 0; i++) {
        double take = min(capacity, items[i].weight);
        items[i].portionTaken = take / items[i].weight;
        totalProfit += take * items[i].price_per_kg;
        capacity -= take;
    }

    cout << "Selected items:\n";
    for(Item it : items) {
        if(it.portionTaken > 0) {
            cout << it.name << " - Price: " << it.price 
                 << " Weight: " << it.weight 
                 << " - Portion Taken: " << it.portionTaken << endl;
        }
    }
    cout << "Total Profit: " << totalProfit << endl;
}

int main() {
    int n;
    double capacity;
    cin >> n >> capacity;

    vector<Item> items;

    for(int i = 0; i < n; i++) {
        string name;
        double price, weight;
        cin >> name >> price >> weight;
        items.push_back(Item(name, price, weight));
    }

    FractionalKnapsack(items, capacity);

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
