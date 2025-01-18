#include <string>
using namespace std;

class Employee {
public:
  Employee(string, string, int);
  void setFirstName(string);
  void setLastName(string);
  void setMonthlySalary(int);
  string getFirstName();
  string getLastName();
  int getMonthlySalary();
private:
  string firstName;
  string lastName;
  int monthlySalary;
};
