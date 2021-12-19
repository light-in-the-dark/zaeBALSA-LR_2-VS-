#include "pch.h"
#include "myheaders.h"


Void start()
{
	setlocale(LC_ALL, "rus");

	const int rows = 6, cols = 3; // ������ ������ (���������� ��� �����)

	array<int, 2>^ matrixA = gcnew array<int, 2>(rows, cols);	// �������� ������� A
	array<int, 2>^ matrixB = gcnew array<int, 2>(rows, cols);	// �������� ������� B
	array<int>^ arrayC;											// �������� ������� C
	array<int>^ arrayD;											// �������� ������� D

	Console::WriteLine(L"���� ������� A:");
	for (int currRow = 0; currRow < rows; currRow++)
	{
		for (int currCol = 0; currCol < cols; currCol++)
		{
			Console::Write("{0}, {1}: ", currRow + 1, currCol + 1);
			matrixA[currRow, currCol] = Convert::ToInt32(Console::ReadLine());
		}
	}

	Console::WriteLine(L"���� ������� B:");
	for (int currRow = 0; currRow < rows; currRow++)
	{
		for (int currCol = 0; currCol < cols; currCol++)
		{
			Console::Write("{0}, {1}: ", currRow + 1, currCol + 1);
			matrixB[currRow, currCol] = Convert::ToInt32(Console::ReadLine());
		}
	}

	arrayC = getArrayOfMaxElements(matrixA, rows, cols);
	arrayD = getArrayOfMaxElements(matrixB, rows, cols);

	Console::Clear();
	String^ index = "0"; // ��������� ����������� �������

	index = "A";
	matrixOutput(matrixA, rows, cols, index);
	maxColsValueOutput(arrayC, cols, index);

	Console::WriteLine("--------------------------");

	index = "B";
	matrixOutput(matrixB, rows, cols, index);
	maxColsValueOutput(arrayD, cols, index);
}