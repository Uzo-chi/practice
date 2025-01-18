#include <string>
using namespace std;

class Date {
public:
  Date(int, int, int);
  void setMonth(int);
  void setDay(int);
  void setYear(int);
  int getMonth();
  int getDay();
  int getYear();
  void displayDate();

private:
  int month;
  int day;
  int year;
};
