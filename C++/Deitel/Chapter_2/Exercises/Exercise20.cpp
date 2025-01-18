// A program to find the the diameter, circumference and area of a circle
#include <iostream>

using namespace std;

int main() {
	int radius;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	
	cout << "The diameter of the circle is " << radius*2 << endl;
	cout << "The circumference of the circle is " << 2*3.14159*radius << endl;
	cout << "The area of the circle is " << 3.14159*radius*radius << endl;
}