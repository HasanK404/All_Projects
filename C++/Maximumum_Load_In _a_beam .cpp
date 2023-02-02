#include <iostream>
#include <cmath>
#include <numbers>

using namespace std;
int main() {
	// 3)
	double l, s, i, d, c, b, h ;
	d = 8 * 12;
	h = 4;
	b = 2;
	s = 3000;
	c = h / 2;
	i = (b * h * h * h) / 12;
	l = (s * i) / (d * c);
	cout << " Distance in Inches that the load is placed from the fixed end of the beam : " << d << " in" << endl;
	cout << " Height of the beam: " << h << " in" << endl;
	cout << " Value of the Base : " << b << " in" << endl;
	cout << " Value of the Stress on the beam : " << s << " lbs/in^2  " <<  endl;
    cout << " for 3a) " << "The Maximumum Load is : " << l << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    h = 6;
	b = 3;
	c = h / 2;
	i = (b * h * h * h) / 12;
	l = (s * i) / (d * c);
	cout << " Distance in Inches that the load is placed from the fixed end of the beam : " << d << " in" << endl;
	cout << " Height of the beam: " << h << " in" << endl;
	cout << " Value of the Base : " << b << " in" << endl;
	cout << " Value of the Stress on the beam : " << s << " lbs/in^2  " << endl;
    cout << " for 3b) " << "The Maximumum Load is : " << l << endl;
	cout << "--------------------------------------------------------------------------------------------" << endl;
	return 0;
}

