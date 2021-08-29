#include "Header.h"

void main()
{
	int M, N;
	cout << "Type M ->" ;
	cin >> M;
	cout << "Type N ->";
	cin >> N;

	int** array = CreateArray(M, N);
	CreateRandomNumber(array, M, N);
	Printarray(array, N, M);
	Search(M, N, array);
	Deletearray(array, M, N);

	system("pause");
}