#include <iostream>

using namespace std;

int binary_search(int* arr, int lenght, int item) {

	int low = 0;
	int high = lenght - 1;
	
	while (low <= high)
	{
		int mid = ((low + high) / 2);
		int guess = arr[mid];
		if (guess == item)
		{
			return mid;
		}
		else
		{
			if (guess > item)
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
	}
	return NULL;
}

int main() {

	int lenght;
	int item;

	cout << "Ievadiet masiva garumu: ";
	cin >> lenght;
	cout << endl;

	int *element_count = new int[lenght];

	cout << "Ievadiet " << lenght << " skaitlus: ";
		for (int i = 0; i < lenght; i++)
		{
			cout << " " << i + 1 << ". ";
			cin >> element_count[i];
		}
	cout << endl;

	cout << "Ievadiet meklejamo elementu masiva: ";
	cin >> item;
	cout << endl;


	cout << "Elementa numurs masiva: " << binary_search(element_count, lenght, item);

	return 0;
}

