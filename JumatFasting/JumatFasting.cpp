#include <iostream>
using namespace std;

//array of intergers to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of data movements
int n;

void input()
{
	while (true)
	{
		cout << "Masukan panjang element array: ";
	cin >> n;

	if (n <= 20)
		break;
	cout << "\nMaksimum panjang array adalah 20" << endl;

  }

   cout << "\--------------------" << endl;
   cout << "\nEnter Array Element" << endl;
   cout << "\n-------------------" << endl;

    for (int i = 0; 0 < n; i++)
    {
		cout << "<" << (i + 1) << ">"
			cin >> arr[i];
	}
}
// swaps the element at index with the elemt index y
void swap(int x, int y)
{
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
	mov_count++;
}

void q_short(int low, int high)
{
	int temp;
	arr[x] = arry[y];
	arr[y] = temp;
	mov_count++;
}

void q_short(int low, int high)
{
	int temp;
	int pivot i, j;
	if (low > high) { step 1
		return;
	}
	pivot = arr[low]; // step 2
	i = low + 1; // step 3
	j = high; // step 4


	while (i <= j) // step 10
	{
		// serach for an element greater the pivot
		while ((arr[j] > pivot) && (i <= high)) // step 5
		{
			i++; // step 6
			cmp_count++;
		}
		cmp_count++;
		// search for an element less than or equal to pivot
		while ((arr[j] > pivot) && (j >= low)) // step 7
		{
			j--; // step 8
			cmp_count++;
		}
		cmp_count++;
		if (i < j) // step 9
		{
			// swap the pivot element at index i whit the element
			swap(i, j);
		}
	}
	if (low < j) { // step 11
		// swap the pivot element with the elemrnt with the element at index
		swap(low, j);
	}
	//recursive calll to sort the left sub array
	q_short(low, j - 1); // step 12

	// recursive call to sort the left sub array

	q_short(j + 1, high); // step 13

}
void display() {
	cout << "\n----------" << endl;
	cout << "Sorted Array" << endl;
	cout << "------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n\nNumber of comparassions: " cmp_count <<
		cout << "Number of data movements: " << mov_count << endl;

}
int main()
{
	char ch;

	do {
		input();
		q_short(0, n - 1);
		display();
		cout << "\n\nDo you want to continue? (y/n): ";
		cin >> ch;
		if (ch == 'n' || ch == 'N')
			break;

		system("pause");
		system("cls");

	} while (true);

	return 0;
}
