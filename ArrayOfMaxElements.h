#pragma once

// Получение массива элементов-максимумов в столбцах матрицы
array<int>^ getArrayOfMaxElements(array<int, 2>^ inputMatrix, const int rows, const int cols)
{
	const int ARR_SIZE = 3;
	array<int>^ maxElementsArray = gcnew array<int>(ARR_SIZE);

	for (int currRow = 0; currRow < rows; currRow++)
	{
		for (int currCol = 0; currCol < cols; currCol++)
		{
			if (inputMatrix[currRow, currCol] > maxElementsArray[currCol])
			{
				maxElementsArray[currCol] = inputMatrix[currRow, currCol];
			}
		}
	}
	return maxElementsArray;
}