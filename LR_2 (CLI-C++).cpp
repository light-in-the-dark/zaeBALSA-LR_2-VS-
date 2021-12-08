#include "pch.h"
#include <array>
#include <clocale>
using namespace System;

// ��������� ������� ���������-���������� � �������� �������
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

// ����� ���������� �������
void matrixOutput(array<int, 2>^ matrix, const int rows, const int cols, char index)
{
	if (index == 'A') // ���� �������������� ������ ����������� ������� � ����� ������
	{
		Console::WriteLine("�������� ������� A:");
		for (int currRow = 0; currRow < rows; currRow++)
		{
			for (int currCol = 0; currCol < cols; currCol++)
			{
				Console::Write("{0,8:N0}", matrix[currRow, currCol]);
			}
			Console::WriteLine();
		}
	}
	else if (index == 'B')
	{
		Console::WriteLine("�������� ������� B:");
		for (int currRow = 0; currRow < rows; currRow++)
		{
			for (int currCol = 0; currCol < cols; currCol++)
			{
				Console::Write("{0,8:N0}", matrix[currRow, currCol]);
			}
			Console::WriteLine();
		}
	}
}

// ����� �������-��������� ��� �������� �������
void maxColsValueOutput(array<int>^ array, const int size, char index)
{
	if (index == 'A') // ���� �������������� ������ ����������� ������� � ����� ������
	{
		Console::WriteLine("��������� �������� ������� A:");
		for (int index = 0; index < size; index++)
		{
			Console::Write("{0,8:N0}", array[index]);
		}
		Console::WriteLine();
	}
	else if (index == 'B')
	{
		Console::WriteLine("��������� �������� ������� B:");
		for (int index = 0; index < size; index++)
		{
			Console::Write("{0,8:N0}", array[index]);
		}
		Console::WriteLine();
	}
}

int main(array<System::String^>^ args)
{
	setlocale(LC_ALL, "rus");

	const int rows = 6, cols = 3;
	array<int, 2>^ matrixA = gcnew array<int, 2>(rows, cols);	// �������� ������� A
	array<int, 2>^ matrixB = gcnew array<int, 2>(rows, cols);	// �������� ������� B
	array<int>^ arrayC;											// �������� ������� C
	array<int>^ arrayD;											// �������� ������� D

	// ���������� ����� ������ ���������� ������� �� 0 �� 100
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
	maxColsValueOutput(arrayC, cols, 'B');

	Console::WriteLine("--------------------------");

	matrixOutput(matrixB, rows, cols, 'B');
	maxColsValueOutput(arrayD, cols, 'B');

	return 0;
}
