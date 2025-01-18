#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int month, int day, int year) {
  setMonth(month);
  setDay(day);
  setYear(year);
}

// the this-> is used to specify an attribute of a class

void Date::setMonth(int month) {
  if (month > 0 && month <= 12)
    this->month = month;
  else
    this->month = 1;
}

void Date::setDay(int day) { this->day = day; }

void Date::setYear(int year) { this->year = year; }

int Date::getMonth() { return month; }

int Date::getDay() { return day; }

int Date::getYear() { return year; }

void Date::displayDate() {
  cout << getMonth() << "/" << getDay() << "/" << getYear();
}
