#include <iostream>
using namespace std;
int main() {
	char choice = 'm';
	
	while (choice != 'c') {
		cout << "Moo" << endl;
		cin >> choice;
		if (choice == 'c')

			cout << "baa " <<  endl;
	}

	int num = 6;
	while (num <= 22) {
		cout << num << " ";
		num+=2;
	}
}