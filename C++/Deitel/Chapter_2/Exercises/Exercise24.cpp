// A program that checks whether an integer is odd or even
#include <iostream>
using namespace std;

int main() {
	int num;
	
	cout << "Enter an integer: ";
	cin >> num;
	
	if (num%2 == 0)
		cout << num << " is even." << endl;
	if (num%2 != 0)
		cout << num << " is odd." << endl;
}