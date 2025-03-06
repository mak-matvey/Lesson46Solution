#include <iostream>
#include "logic.h"
using namespace std;

int main()
{
	int** matrix;
	int n, m;

	cout << "Input size of matrix:";
	cin >> n >> m;

	matrix = new int* [n];

	int* array = sum_raw_elements(matrix, n, m);

	cout << "Sum of raw elements: ";
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}

	delete[] matrix;

	return 0;
}