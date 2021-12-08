#pragma once

// Вывод полученной матрицы
void matrixOutput(array<int, 2>^ matrix, const int rows, const int cols, char index)
{
	if (index == 'A') // надо посоветоваться насчет встраивания индекса в поток вывода
	{
		Console::WriteLine(L"Элементы матрицы A:", index);
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
	else if (index == 'B')
	{
		Console::WriteLine(L"Элементы матрицы B:");
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

// Вывод массива-максимума для столбцов матрицы
void maxColsValueOutput(array<int>^ array, const int size, char index)
{
	if (index == 'A') // надо посоветоваться насчет встраивания индекса в поток вывода
	{
		Console::WriteLine("Максимумы столбцов матрицы A:");
		for (int index = 0; index < size; index++)
		{
			Console::Write("{0,8:N0}", array[index]);
		}
		Console::WriteLine();
	}
	else if (index == 'B')
	{
		Console::WriteLine("Максимумы столбцов матрицы B:");
		for (int index = 0; index < size; index++)
		{
			Console::Write("{0,8:N0}", array[index]);
		}
		Console::WriteLine();
	}
}