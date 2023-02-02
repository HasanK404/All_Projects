#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	int a ;

	cout << "Which size of coffee would you like" << "\n" << "Press 1 for Small" << "\n" << "Press 2 for Medium" << "\n" << "Press 3 for Large" << "\n" << endl;
	cin >> a;

	if (a == 1)
	{
		cout << "The price is 3.99 for Small" << endl;
	}
	if (a == 2)
	{
		cout << "The price is 4.99 for Medium" << endl;
	}
	if (a == 3)
	{
		cout << "The price is 5.99 for Large" << endl;
	}


	
	return 0;
}