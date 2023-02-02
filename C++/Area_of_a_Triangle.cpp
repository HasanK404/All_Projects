#include <iostream>
#include <cmath>
#include <numbers>

using namespace std;
int main() {
	// 1)
	double b, h, a;

	cout << "Calulate the Area of a Triangle" << endl;
	cout << "Enter the length of the Height: " << flush;
	cin >> h;
	cout << "Enter the length of the Base : " << flush;
	cin >> b;

	a =  (b * h)/2;

	cout << "The Area of the Triangle is : " << a << endl;
	
	return 0;
 }

	