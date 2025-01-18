#include "Employee.h"
#include <iostream>
using namespace std;

int main() {
  Employee employee1("Uzochi", "Okoronkwo", 5000000);
  Employee employee2("Obinna", "Ezeike", 3000000);

  // display employee1 details and yearly salary
  cout << "First Name: " << employee1.getFirstName() << "\n"
       << "Last Name: " << employee1.getLastName() << "\n"
       << "Yearly Salary: " << employee1.getMonthlySalary() * 12 << "\n"
       << endl;

  // display employee2 details and yearly salary
  cout << "First Name: " << employee2.getFirstName() << "\n"
       << "Last Name: " << employee2.getLastName() << "\n"
       << "Yearly Salary: " << employee2.getMonthlySalary() * 12 << "\n"
       << endl;

  // give employees a 10% increase
  employee1.setMonthlySalary(employee1.getMonthlySalary() * 1.1);
  employee2.setMonthlySalary(employee2.getMonthlySalary() * 1.1);

  // display employees' yearly salary
  cout << employee1.getFirstName()
       << "'s yearly salary: " << employee1.getMonthlySalary() * 12 << "\n"
       << employee2.getFirstName()
       << "'s yearly salary: " << employee2.getMonthlySalary() * 12 << endl;
}
