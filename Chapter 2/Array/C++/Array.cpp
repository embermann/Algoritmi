#include <iostream>

using namespace std;


void print_arr(int* arr, int length) {

	cout << endl;
	cout << "Tiek izvaditi masiva elementi";
		cout << endl << " | \t";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " | \t";

	}

	cout << endl << " | \t";
	for (int i = 0; i < length; i++)
	{
		cout << i << " | \t";

	}

	cout << endl << "Un elementu indeksi ^^^";

	

}

int main() {

	int length;
	int item;

	cout << "Ievadiet masiva garumu: ";
	cin >> length;
	cout << endl;

	int *elements = new int[length];

	cout << "Ievadiet " << length << " skaitlus: ";
		for (int i = 0; i < length; i++)
		{
			cout << " " << i + 1 << ". ";
			cin >> elements[i];
		}
	cout << endl;

	print_arr(elements, length);

	return 0;
}

