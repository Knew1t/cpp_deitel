#include <iomanip>
#include <iostream>
#include <stdexcept>
using namespace std;

class testClass {
  public:
    testClass(int n):data(n){
    }
    void printDataPlusData(int data) const { cout << data + testClass::data << endl; }
    void setData(int data){
      if (data<20) {
        throw invalid_argument("wrong b!\n");
      }
      testClass::data = data;
    }

  private:
    int data;
};
int main(int argc, char *argv[]) {
    testClass t(9);
    t.setData(1);
    return 0;
}
