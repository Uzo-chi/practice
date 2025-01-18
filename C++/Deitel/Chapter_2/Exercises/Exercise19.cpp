// A program that compares three numbers and finds their sum, average and product
#include <iostream>

using namespace std;

int main() {
	int num1, num2, num3;
	int sum, avg, product, max, min;
	
	cout << "Input three different integers: ";
	cin >> num1 >> num2 >> num3;
	
	sum = num1 + num2 + num3;
	avg = (num1 + num2 + num3) / 3;
	product = num1 * num2 * num3;
	
	if (num1 > num2)
		if (num1 > num3)
			max = num1;
			
	if (num1 < num2)
		if (num1 < num3)
			min = num1;
			
	if (num2 > num1)
		if (num2 > num3)
			max = num2;
			
	if (num2 < num1)
		if (num2 < num3)
			min = num2;
			
	if (num3 > num1)
		if (num3 > num2)
			max = num3;
	
	if (num3 < num1)
		if (num3 < num2)
			min = num3;
	
	cout << "Sum is " << sum << endl;
	cout << "Average is " << avg << endl;
	cout << "Product is " << product << endl;
	cout << "Smallest is " << min << endl;
	cout << "Largest is " << max << endl;
}