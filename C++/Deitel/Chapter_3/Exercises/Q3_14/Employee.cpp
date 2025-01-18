#include "Employee.h"
using namespace std;

Employee::Employee(string fname, string lname, int salary) {
  setFirstName(fname);
  setLastName(lname);
  setMonthlySalary(salary);
}

void Employee::setFirstName(string fname) {
  firstName = fname;
}

void Employee::setLastName(string lname) {
  lastName = lname;
}

void Employee::setMonthlySalary(int salary) {
  if (salary < 0)
    monthlySalary = 0;
  else
    monthlySalary = salary;
}

string Employee::getFirstName() {
  return firstName;
}

string Employee::getLastName() {
  return lastName;
}

int Employee::getMonthlySalary() {
  return monthlySalary;
}
