#include <stdio.h>

/**
 * row_sum - Computes the sum of products for a single row
 * @row: The current row number
 * @cols: The number of columns
 *
 * Return: The sum for the current row
 */
int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
		sum += row * c;

	return (sum);
}

/**
 * total_sum - Computes the total sum across all rows and columns
 * @rows: The number of rows
 * @cols: The number of columns
 *
 * Return: The total accumulated sum
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;

	for (r = 1; r <= rows; r++)
	{
		total += row_sum(r, cols);
	}

	return (total);
}

/* -- DO NOT Modify the code below this line -- */
int main(void)
{
    printf("%d\n", total_sum(3, 3));
    return 0;
}
