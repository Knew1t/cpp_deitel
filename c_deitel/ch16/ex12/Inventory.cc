#include "Inventory.h"
using namespace std;

Inventory::Inventory(string name, int amount):product_description(name), stock_balance(amount) {
    if (amount < 20) {
        cerr << "Not enough stock in " << name << endl;
    }
}

void Inventory::Purchase(int amount) { stock_balance += amount; }

void Inventory::Sale(int amount) {
    stock_balance -= amount;
    if (GetStock() < 20) {
        cout << "not enough stock in " <<  GetProductDescription() << ", purchasing more product" << endl;
        Purchase(20 - GetStock());
    }
}

int Inventory::GetStock() const {
    return stock_balance;
}

string Inventory::GetProductDescription(){
  return product_description;
}
