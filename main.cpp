#include <iostream>
#include <ctime>
using namespace std;

int* create_array_m(int *size_m)
{
	int* array_m = new int[*size_m];
	for (int i = 0; i < *size_m; i++)
	{
		array_m[i] = rand() % 50;
	}
	return array_m;
}

int* create_array_n(int *size_n)
{
	int* array_n = new int[*size_n];
	for (int i = 0; i < *size_n; i++)
	{
		array_n[i] = rand() % 50;
	}
	return array_n;
}

int* create_array_a(int* size_a)
{
	int* array_a = new int[*size_a];
	for (int i = 0; i < *size_a; i++)
	{
		array_a[i] = 0;
	}
	return array_a;
}

void print_array_m(int* array_m, int* size_m)
{
	for (int i = 0; i < *size_m; i++)
	{
		cout << *(array_m + i) << " ";
	}
	cout << endl;
}

void print_array_n(int* array_n, int* size_n)
{
	for (int i = 0; i < *size_n; i++)
	{
		cout << *(array_n + i) << " ";
	}
	cout << endl;
}

void print_array_a(int* array_m, int* array_n, int* size_m, int* size_n, int* array_a, int* size_a)
{
	for (int i = 0; i < *size_m; i++)
	{
		array_a[i] = array_m[i];
	}
	for (int i = 0; i < *size_n; i++)
	{
		array_a[*size_m + i] = array_n[i];
	}
	for (int i = 0; i < *size_a; i++)
	{
		cout << array_a[i] << " ";
	}
}

int main()
{
	int* size_m = new int;
	int* size_n = new int;
	int* size_a = new int;
	cout << "Enter the size of the first array: ";
	cin >> *size_m;
	cout << "Enter the size of the second array: ";
	cin >> *size_n;
	*size_a = *size_m + *size_n;
	int* array_m = create_array_m(size_m);
	int* array_n = create_array_n(size_n);
	int* array_a = create_array_a(size_a);
	print_array_m(array_m, size_m);
	print_array_n(array_n, size_n);
	print_array_a(array_m, array_n, size_m, size_n, array_a, size_a);

	return 0;
}