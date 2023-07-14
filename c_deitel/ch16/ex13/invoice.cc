
#include "invoice.h"
using namespace std;

Invoice::Invoice(std::string number, std::string description, int amount, int p)
    : part_number(number), part_description(description),
      amount_of_purchased(amount), price(p) {}

string Invoice::GetPartNumber() { return part_number; }
string Invoice::GetPartDescription() { return part_description; }
int Invoice::GetAmountOfPurchased() const { return amount_of_purchased; }
int Invoice::GetPrice() const { return price; }
int Invoice::GetInvoiceAmount() {
    if (GetPrice() < 0) {
        SetPrice(0);
    }
    if (GetAmountOfPurchased() < 0) {
        SetAmountOfPurchased(0);
    }
    return GetPrice() * GetAmountOfPurchased();
}

void Invoice::SetPartNumber(std::string num) { part_number = num; }
void Invoice::SetPartDescription(std::string description) {
    part_description = description;
}
void Invoice::SetAmountOfPurchased(int amount) { amount_of_purchased = amount; }
void Invoice::SetPrice(int p) { price = p; }
