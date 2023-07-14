#include <iostream>

class Inventory {
  public:
    Inventory(std::string, int);

    void Purchase(int amount);
    void Sale(int);
    int GetStock() const;
    std::string GetProductDescription();


  private:
    std::string product_description;
    int stock_balance;
};
