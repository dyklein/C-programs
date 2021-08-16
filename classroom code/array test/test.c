#include <conio.h>
#include <stdio.h>

int SumOfArray(int a[], int n)
{
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum;
}
int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	printf("sum of the array is %d", SumOfArray(a, 10));

	return 0;
}