#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	int a, i, j;
	string k;
	cout << "This program is designed to exhibit all the positive divisors of positive integers entred by you." << "\n" <<" The program will repeatedly ask you to enter a positive integer and each time the program will print all the divisors of your integer in decreasing order. " << endl;
	cout << "Enter a Positive Integer : " << flush;
	cin >> a;
	j = 1;
	while (a <= 0) {

		cout << a << " is not a positive integer " << endl;
		cout << "\n" << "Enter a Positive Integer : " << flush;
		cin >> a;
	}
	while (a > 0) {
		for (int i = a + 1; i > 0; i--)
			if (a % i == 0)
			{
				cout << i << "\n";
			}
		break;
	}

		cout << "Would you like to see the divisors of another integer (y/n)? : " << flush;
		cin >> k;

		while (k != "y" && k != "n") {
			cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
			cout << "Would you like to see the divisors of another integer (y/n)? : " << flush;
			cin >> k;
		}
		while (k == "n") {
			break;
		}
		while (k == "y") {
			cout << "Enter a Positive Integer : " << flush;
			cin >> a;
			while (a <= 0) {

				cout << a << " is not a positive integer " << endl;
				cout << "\n" << "Enter a Positive Integer : " << flush;
				cin >> a;
			}
			while (a > 0) {
				for (int i = a + 1; i > 0; i--)
					if (a % i == 0)
					{
						cout << i << "\n";
					}
				break;
			}
			cout << "Would you like to see the divisors of another integer (y/n)? : " << flush;
			cin >> k;

			while (k != "y" && k != "n") {
				cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
				cout << "Would you like to see the divisors of another integer (y/n)? : " << flush;
				cin >> k;
			}
			while (k == "n") {
				break;
			}
		}
		return 0;
}

	





