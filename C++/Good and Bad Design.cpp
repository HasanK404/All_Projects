#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	double R1, R2, R3, R4, R5, R6, N;
	cout << "This program will tell you if the resistors connected in circuit are in good design or in bad design " << endl;
	cout << "Enter the value of 1st resistance [R1] : " << flush;
	cin >> R1;
	cout << "Enter the value of 2nd resistance [R2] : " << flush;
	cin >> R2;
	cout << "Enter the value of 3rd resistance [R3] : " << flush;
	cin >> R3;
	cout << "Enter the value of 4th resistance [R4] : " << flush;
	cin >> R4;
	cout << "Enter the value of 5th resistance [R5] : " << flush;
	cin >> R5;
	cout << "Enter the value of 6th resistance [R6] : " << flush;
	cin >> R6;

	N = ((R1 + R2) * R4 * R6) / ((R3 + R4) * R1 * R5);

	if (N == 7.5)
	{
		cout << "Good Design values: " << "\t" << R1 << "\t" << R2 << "\t" << R3 << "\t" << R4 << "\t" << R5 << "\t" << R6 << endl;
	}
	else
	{
		cout << "Bad Design values: " << "\t" << R1 << "\t" << R2 << "\t" << R3 << "\t" << R4 << "\t" << R5 << "\t" << R6 << endl;
	}
	return 0;
}





