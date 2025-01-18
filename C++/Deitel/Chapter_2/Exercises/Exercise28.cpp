// A program that separates a five-digit integer into its digits
#include <iostream>
using namespace std;

int main() {
	int num,calc,a,b,c,d,e;
	
	cout << "Enter a five-digit integer: ";
	cin >> num;
	
	if (num/10000 >= 1){
		a = num/10000;
		calc = num%10000;
		b = calc/1000;
		calc %= 1000;
		c = calc/100;
		calc %= 100;
		d = calc/10;
		calc %= 10;
		e = calc;
		
		cout<<a<<"   "<<b<<"   "<<c<<"   "<<d<<"   "<<e;
	}
	
	if (num/10000 < 1){
		cout << num << " is less than 5 digits!" << endl;
	}
}