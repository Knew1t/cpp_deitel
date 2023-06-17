#include <iostream>
#include <string>

class Invoice {
public:
  Invoice(std::string number, std::string description, int amount, int price);
  void SetPartNumber(std::string);
  void SetPartDescription(std::string);
  void SetAmountOfPurchased(int);
  void SetPrice(int);

  std::string GetPartNumber();
  std::string GetPartDescription();
  int GetAmountOfPurchased() const;
  int GetPrice() const;
  int GetInvoiceAmount() ;

private:
  std::string part_number;
  std::string part_description;
  int amount_of_purchased;
  int price;
  
};

