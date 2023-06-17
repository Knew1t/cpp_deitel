#include "Inventory.h"
using namespace std;

int main(int argc, char *argv[]) {
    Inventory first("chair", 5);
    Inventory second("table", 21);
    cout << "First Inventory contains " << first.GetStock() << " "
         << first.GetProductDescription() << endl;
    cout << "Second Inventory contains " << second.GetStock() << " "
         << second.GetProductDescription() << "s" << endl;
    cout << "Purchase 100" << first.GetProductDescription() << " s" << endl;
    first.Purchase(100);
    cout << first.GetStock() << endl;
    cout << "sale 100" << second.GetProductDescription() << "s" << endl;
    second.Sale(100);
    cout << second.GetStock() << endl;

    return 0;
}
