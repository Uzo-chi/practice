#include "Invoice.h"
#include <iostream>
using namespace std;

int main() {
  Invoice invoice1("GB1001256", "Gear Box", 4, 150000);

  // display details of invoice1
  cout << "Part Number: " << invoice1.getPartNumber() << "\n"
       << "Part Description: " << invoice1.getPartDesc() << "\n"
       << "Quantity: " << invoice1.getQuantity() << "\n"
       << "Price: " << invoice1.getPrice() << "\n"
       << "Invoice amount: " << invoice1.getInvoiceAmount() << endl;

  // change the quantity of invoice1 to a negative number
  invoice1.setQuantity(-200);

  // display updated invoice1
  cout << "\nPart Number: " << invoice1.getPartNumber() << "\n"
       << "Part Description: " << invoice1.getPartDesc() << "\n"
       << "Quantity: " << invoice1.getQuantity() << "\n"
       << "Price: " << invoice1.getPrice() << "\n"
       << "Invoice amount: " << invoice1.getInvoiceAmount() << endl;

  // change some other stuff
  invoice1.setPartNumber("RM2005342");
  invoice1.setPartDesc("Rotor");
  invoice1.setQuantity(5);
  invoice1.setPrice(250000);

  // display updated invoice1
  cout << "\nPart Number: " << invoice1.getPartNumber() << "\n"
       << "Part Description: " << invoice1.getPartDesc() << "\n"
       << "Quantity: " << invoice1.getQuantity() << "\n"
       << "Price: " << invoice1.getPrice() << "\n"
       << "Invoice amount: " << invoice1.getInvoiceAmount() << endl;
}
