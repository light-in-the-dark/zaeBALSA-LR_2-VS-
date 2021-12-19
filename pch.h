// pch.h: это предварительно скомпилированный заголовочный файл.
// Перечисленные ниже файлы компилируются только один раз, что ускоряет последующие сборки.
// Это также влияет на работу IntelliSense, включая многие функции просмотра и завершения кода.
// Однако изменение любого из приведенных здесь файлов между операциями сборки приведет к повторной компиляции всех(!) этих файлов.
// Не добавляйте сюда файлы, которые планируете часто изменять, так как в этом случае выигрыша в производительности не будет.

#ifndef PCH_H
#define PCH_H

#include <array>
#include <clocale>
using namespace System;

// начало
Void start();

// Получение массива элементов-максимумов в столбцах матрицы
array<int>^ getArrayOfMaxElements(array<int, 2>^ inputMatrix, const int rows, const int cols);

// Вывод полученной матрицы
Void matrixOutput(array<int, 2>^ matrix, const int rows, const int cols, String^ index);

// Вывод массива-максимума для столбцов матрицы
Void maxColsValueOutput(array<int>^ array, const int size, String^ index);

#endif //PCH_H
