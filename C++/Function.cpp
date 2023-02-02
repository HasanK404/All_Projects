#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
	double a, b, c;
	cout << "Enter the value of the function :" << flush;
	cin >> a;

	if (a <= 0)
	{
		b = pow(2, (-3 * a));
		cout << "The value of function is " << b << endl;
	}
	else {
		c = log(a) + 10;
		cout << "The value of function is " << c << endl;
	}
	return 0;
}


