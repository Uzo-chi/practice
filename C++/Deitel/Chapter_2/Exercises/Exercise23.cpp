// A program to find the largest and smallest numbers from 5 integers
#include <iostream>
using namespace std;

int main() {
	int num1,num2,num3,num4,num5;
	int max,min = 0;
	
	cout << "Enter five integers (separated by spaces): ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	
	if (num1 > num2){
		if (num1 > num3){
			if (num1 > num4){
				if (num1 > num5){
					max = num1;
				}
			}
		}
	}
	if (num1 < num2){
		if (num1 < num3){
			if (num1 < num4){
				if (num1 < num5){
					min = num1;
				}
			}
		}
	}
	
	if (num2 > num1){
		if (num2 > num3){
			if (num2 > num4){
				if (num2 > num5){
					max = num2;
				}
			}
		}
	}
	if (num2 < num1){
		if (num2 < num3){
			if (num2 < num4){
				if (num2 < num5){
					min = num2;
				}
			}
		}
	}
	
	if (num3 > num1){
		if (num3 > num2){
			if (num3 > num4){
				if (num3 > num5){
					max = num3;
				}
			}
		}
	}
	if (num3 < num1){
		if (num3 < num2){
			if (num3 < num4){
				if (num3 < num5){
					min = num3;
				}
			}
		}
	}
	
	if (num4 > num1){
		if (num4 > num2){
			if (num4 > num3){
				if (num4 > num5){
					max = num4;
				}
			}
		}
	}
	if (num4 < num1){
		if (num4 < num2){
			if (num4 < num3){
				if (num4 < num5){
					min = num4;
				}
			}
		}
	}
	
	if (num5 > num1){
		if (num5 > num2){
			if (num5 > num3){
				if (num5 > num4){
					max = num5;
				}
			}
		}
	}
	if (num5 < num1){
		if (num5 < num2){
			if (num5 < num3){
				if (num5 < num4){
					min = num5;
				}
			}
		}
	}
	
	cout << "The largest integer is " << max << endl;
	cout << "The smallest integer is " << min << endl;
}