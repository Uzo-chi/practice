// A program that prints the integer equivalent of a character
#include <iostream>
using namespace std;

int main() {
	char text;
	
	cout << "Enter a character from your keyboard: ";
	cin >> text;
	
	cout<<"Integer equivalent of "<<text<<": "<<static_cast< int >(text); 
}