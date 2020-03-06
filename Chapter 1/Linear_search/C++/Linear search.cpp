#include <iostream>

using namespace std;

int linear_search(int* arr, int lenght, int item) {

	for (int i = 0; i < lenght; i++)
	{
		if (arr[i] == item)
		{
			return i;
		}
		else return NULL;
	}
}

int main() {

	int lenght;
	int item;

	cout << "Ievadiet masiva garumu: ";
	cin >> lenght;
	cout << endl;

	int *elements = new int[lenght];

	cout << "Ievadiet " << lenght << " skaitlus: ";
		for (int i = 0; i < lenght; i++)
		{
			cout << " " << i + 1 << ". ";
			cin >> elements[i];
		}
	cout << endl;

	cout << "Ievadiet meklejamo elementu masiva: ";
	cin >> item;
	cout << endl;

	if (linear_search(elements, lenght, item) == NULL)
	{
		cout << "Tada elementa nav.";
	}
	else
	{
		cout << "Elementa numurs masiva: " << linear_search(elements, lenght, item);
	}

	return 0;
}

