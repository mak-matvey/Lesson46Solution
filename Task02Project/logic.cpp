#include "logic.h"

int* sum_raw_elements(int** matrix, int n, int m)
{
	int* sums = new int[n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sums[i][j] += matrix[i][j];
		}
	}

	return sums;
}