#pragma once

Void matrixOutput(array<int, 2>^ matrix, const int rows, const int cols, String^ index)
{
	{
		Console::WriteLine(L"Элементы матрицы {0}:", index);
		for (int currRow = 0; currRow < rows; currRow++)
		{
			for (int currCol = 0; currCol < cols; currCol++)
			{
				Console::Write("{0,8:N0}", matrix[currRow, currCol]);
			}
			Console::WriteLine();
		}
		Console::WriteLine();
	}
}


Void maxColsValueOutput(array<int>^ array, const int size, String^ index)
{
	{
		Console::WriteLine(L"Максимумы столбцов матрицы {0}:", index);
		for (int index = 0; index < size; index++)
		{
			Console::Write("{0,8:N0}", array[index]);
		}
		Console::WriteLine();
	}
}