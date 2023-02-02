#include <iostream>
#include <cmath>
#include <numbers>

using namespace std;
int main() {
	// 2)
	double n, a, d, s;

	cout << "Calulate the Sum Between two Integers" << endl;
	cout << "Enter the First number you want to calculate from : " << endl;
	cin >> a;
	cout << "Number of integers you want to add : " << endl;
	cin >> n;
	
	d = 1;
	s = ((n/2) * (2 * a + (n - 1) * d));

	cout << "The Sum between two intgers with a difference of "<< d <<" is : " << s << endl;

	return 0;

}

