#include "invoice.h"
#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  std::cout << "Setting data members through constructor" << std::endl; 
  Invoice inv1("leg 01", "first leg", 5, 10);
  std::cout << "Printing invoice data and calculating " << std::endl;
  std::cout << "Part number is " << inv1.GetPartNumber() << std::endl;
  std::cout << "Part Description is " << inv1.GetPartDescription() << std::endl;
  std::cout << "Purchased " << inv1.GetAmountOfPurchased() <<  std::endl;
  std::cout << "Price" << inv1.GetPrice() << std::endl;
  std::cout << "Invoice amount" << inv1.GetInvoiceAmount() << std::endl;

  std::cout << "Setting data members through constructor" << std::endl; 
  Invoice inv2("leg 01", "first leg", 5, -10);
  std::cout << "Printing invoice data and calculating " << std::endl;
  std::cout << "Part number is " << inv2.GetPartNumber() << std::endl;
  std::cout << "Part Description is " << inv2.GetPartDescription() << std::endl;
  std::cout << "Purchased " << inv2.GetAmountOfPurchased() <<  std::endl;
  std::cout << "Price" << inv2.GetPrice() << std::endl;
  std::cout << "Invoice amount " << inv2.GetInvoiceAmount() << std::endl;
  std::cout << "NewPrice " << inv2.GetPrice() << std::endl;

  return 0;
}
