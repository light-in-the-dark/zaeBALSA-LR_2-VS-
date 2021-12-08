#include "pch.h"
#include "myheaders.h"

int main(array<String^>^ args)
{
	setlocale(LC_ALL, "rus");

	const int rows = 6, cols = 3;

	array<int, 2>^ matrixA = gcnew array<int, 2>(rows, cols);	// создание матрицы A
	array<int, 2>^ matrixB = gcnew array<int, 2>(rows, cols);	// создание матрицы B
	array<int>^ arrayC;											// создание массива C
	array<int>^ arrayD;											// создание массива D

	// Заполнение обеих матриц рандомными числами от 0 до 100
	Random^ randomGenerator = gcnew Random;
	for (int currRow = 0; currRow < rows; currRow++)
	{
		for (int currCol = 0; currCol < cols; currCol++)
		{
			matrixA[currRow, currCol] = randomGenerator->Next(101);
			matrixB[currRow, currCol] = randomGenerator->Next(101);
		}
	}

	arrayC = getArrayOfMaxElements(matrixA, rows, cols);
	arrayD = getArrayOfMaxElements(matrixB, rows, cols);

	matrixOutput(matrixA, rows, cols, 'A');
	maxColsValueOutput(arrayC, cols, 'A');

	Console::WriteLine("--------------------------");

	matrixOutput(matrixB, rows, cols, 'B');
	maxColsValueOutput(arrayD, cols, 'B');

	return 0;
}
