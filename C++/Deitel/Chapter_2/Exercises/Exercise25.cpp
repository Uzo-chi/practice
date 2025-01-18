// A program that determines if an integer is a multiple of another
#include <iostream>
using namespace std;

int main() {
	int num1,num2;
	
	cout << "Enter two integers (separated by spaces): ";
	cin >> num1 >> num2;
	
	if (num1%num2 == 0)
		cout << num1 << " is a multiple of " << num2 << endl;
	if (num1%num2 != 0)
		cout << num1 << " is not a multiple of " << num2 << endl;
}