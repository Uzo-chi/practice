// A program that calculates the sum, product, difference
// and quotient of two numbers
#include <iostream>

using namespace std;

// Start main program
int main() {
	int num1, num2; // Declare variables
	int sum, product, difference, quotient;
	
	cout << "Enter two integers (separated by a space): "; // User prompt
	cin >> num1 >> num2; // Read and store user input in num1 and num2
	
	sum = num1 + num2; // Add inputs and store them in sum
	product = num1 * num2; // Multiply inputs and store them in product
	difference = num1 - num2; // Subtract num2 from num1 and store it in difference
	quotient = num1 / num2; // Divide num1 by num2 and store it in quotient
	
	cout << num1 << " + " << num2 << " = " << sum << endl;
	cout << num1 << " * " << num2 << " = " << product << endl;
	cout << num1 << " - " << num2 << " = " << difference << endl;
	cout << num1 << " / " << num2 << " = " << quotient << endl;
} 