#include "Date.h"
#include <iostream>
using namespace std;

int main() {
  Date date1(1, 17, 2025);

  // display date
  cout << "Today's date: ";
  date1.displayDate();
  cout << endl;

  // change date
  date1.setMonth(2);
  date1.setDay(14);
  date1.setYear(2026);

  // display updated date
  cout << "Valentine's day next year: ";
  date1.displayDate();
  cout << endl;

  // set invalid date
  date1.setMonth(24);

  // display updated date
  cout << "Month reset: ";
  date1.displayDate();
  cout << endl;
}
