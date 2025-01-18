#include "Invoice.h"
using namespace std;

Invoice::Invoice(string part_num, string part_desc, int qty, int price) {
  setPartNumber(part_num);
  setPartDesc(part_desc);
  setQuantity(qty);
  setPrice(price);
}

void Invoice::setPartNumber(string part_num) { partNumber = part_num; }

void Invoice::setPartDesc(string part_desc) { partDescription = part_desc; }

void Invoice::setPrice(int price) {
  if (price < 0)
    pricePerItem = 0;
  else
    pricePerItem = price;
}

void Invoice::setQuantity(int qty) {
  if (qty < 0)
    itemQuantity = 0;
  else
    itemQuantity = qty;
}

string Invoice::getPartNumber() { return partNumber; }

string Invoice::getPartDesc() { return partDescription; }

int Invoice::getPrice() { return pricePerItem; }

int Invoice::getQuantity() { return itemQuantity; }

int Invoice::getInvoiceAmount() { return (itemQuantity * pricePerItem); }
