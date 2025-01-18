#include <string>
using namespace std;

class Invoice {
public:
  Invoice(string, string, int, int);
  void setPartNumber(string);
  void setPartDesc(string);
  void setQuantity(int);
  void setPrice(int);
  string getPartNumber();
  string getPartDesc();
  int getQuantity();
  int getPrice();
  int getInvoiceAmount();
private:
  string partNumber;
  string partDescription;
  int itemQuantity;
  int pricePerItem;
};
