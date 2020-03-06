#include <iostream>

using namespace std;

void selection_sort(int* arr, int length) {
	

	for (int i = 0; i < length ; i++)
	{
		int smallest = arr[i];
		int smallest_index = i;
		

		for (int a = i; a < length ; a++)
		{
			if (smallest > arr[a])
			{
				smallest = arr[a];
				smallest_index = a;
			}
		}

		int temp = arr[i];
		arr[i] = arr[smallest_index];
		arr[smallest_index] = temp;
	}
}

void print_arr(int* arr, int length) {

	cout << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
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

	selection_sort(elements, length);
	print_arr(elements, length);

	return 0;
}

