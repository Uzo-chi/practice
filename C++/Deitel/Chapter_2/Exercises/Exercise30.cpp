// A program that calculates body mass index
#include <iostream>
using namespace std;

int main() {
	int weight, height;
	
	cout << "BMI VALUES" << endl;
	cout << "Underweight:\tless than 18.5" << endl;
	cout << "Normal:     \tbetween 18.5 and 24.9" << endl;
	cout << "Overweight: \tbetween 25 and 29.9" << endl;
	cout << "Obese:      \t30 or greater" << endl;
	
	cout << "\nEnter your weight (in kilograms): ";
	cin >> weight;
	cout << "Enter your height (in meters): ";
	cin >> height;
	
	cout << "\nYour BMI is " << weight/(height*height) << endl;
}