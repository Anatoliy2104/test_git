#include "Header.h"
int** CreateArray(int M, int N)
{
	int** array = new int* [M];
	for (int i = 0; i < M; i++)
	{
		array[i] = new int[N];
	}
	return array;
}
void CreateRandomNumber(int** array, int M, int N) 
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			array[i][j] = rand() % 99 + 1;
		}
	}
}
void Deletearray(int** array, int M, int N) 
{
	for (int i = 0; i < M; i++)
	{
		delete[]array[i];
	}
	delete[]array;
}
void Printarray(int** array, int N, int M) 
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << setw(3) << array[i][j];
		}cout << endl;
	}
}
void Search(int M, int N, int** array)
{
	int sum = 0, maxsum = 0, indexmaxsum = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			sum += array[i][j];
		}
		if (sum > maxsum)
		{
			maxsum = sum;
			indexmaxsum = i;
		}
		sum = 0;
	}
	cout << endl << "Max row sum ->" << maxsum << endl << "The number of raw->" << indexmaxsum + 1 << endl;
}