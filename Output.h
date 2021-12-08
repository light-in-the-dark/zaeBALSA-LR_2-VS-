#pragma once

// ����� ���������� �������
void matrixOutput(array<int, 2>^ matrix, const int rows, const int cols, char index)
{
	if (index == 'A') // ���� �������������� ������ ����������� ������� � ����� ������
	{
		Console::WriteLine(L"�������� ������� A:", index);
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
		Console::WriteLine(L"�������� ������� B:");
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