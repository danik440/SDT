#include <iostream>
#include <math.h>
#include <ctime>
#include <algorithm>
using namespace std;


int main() {
	setlocale(LC_ALL, "rus");
	int sizeRow, sizeCol;
	cout << "Кол-во строк массива = "; cin >> sizeRow;
	cout << "Кол-во столбцов массива = "; cin >> sizeCol;

	int** mtrx = new int* [sizeRow];
	for (int i = 0; i < sizeRow; i++)
	{
		mtrx[i] = new int[sizeCol];
		for (int j = 0; j < sizeCol; j++)
		{
			mtrx[i][j] = rand() % 200 - 100;
			cout << mtrx[i][j] << " ";
		}
		cout << endl;
	}

	
	int mtrxSum = 0;
	for (int q = 0; q < sizeRow; q++)
		for (int w = 0; w < sizeCol; w++)
			mtrxSum += mtrx[q][w];

	cout << "\nСумма элементоа матрицы равна = " << mtrxSum << "\n" << endl;


	int sizeRow2, sizeCol2;
	cout << "Введите размеры второй матрицы" << endl;
	cout << "Количество строк = "; cin >> sizeRow2;
	cout << "Количество столбцов = "; cin >> sizeCol2;
	cout << endl;
	int** mtrx2 = new int* [sizeRow2];
	for (int e = 0; e < sizeRow2; e++)
	{
		mtrx2[e] = new int[sizeCol2];
		for (int r = 0; r < sizeCol2; r++)
		{
			mtrx2[e][r] = rand() % 200 - 100;
			cout << mtrx2[e][r] << " ";
		}
		cout << "\n";
	}

	if (sizeCol != sizeRow2)
	{
		cout << "Перемножение невозможно. " << endl;
	}
	cout << "\nРезультат перемножения:\n " << endl;
	

	int** prodMatrx = new int* [sizeRow];

	for (int i2 = 0; i2 < sizeRow; i2++)
	{
		prodMatrx[i2] = new int[sizeCol2];
		for (int j2 = 0; j2 < sizeCol2; j2++)
		{
			prodMatrx[i2][j2] = 0;
			for (int k = 0; k < sizeCol; k++)
				prodMatrx[i2][j2] += mtrx[i2][k] * mtrx2[k][j2];
		}
	}
	

	for (int i3 = 0; i3 < sizeRow; i3++)
	{
		for (int j3 = 0; j3 < sizeCol2; j3++)
			cout << prodMatrx[i3][j3] << " ";
		cout << "\n" << endl;
	}

	
	int size, m, i;
	cin >> size;
	int* arr = new int[size];

	for (m = 0; m < size; m++)
	{
		cout << arr[m] << endl;
		for (i = m + 1; i < size; i++)
		{
			if (arr[m] == arr[i]) {
				for (int k = i; k < size - 1; k++) 
				{
					arr[k] = arr[k + 1];
				}
				size--;

			}
		}
	}


	sort(arr, arr + size); 
	if (size % 2 == 0) 
	{
		cout << (arr[size / 2] + arr[(size / 2) - 1]) / 2 << endl;
	}
	else 
	{
		cout << arr[size / 2] << endl;
	}


	int max = mtrx[0][0];
	int min = mtrx[0][0];
	for (i = 0; i < sizeRow; i++)
		for (int j = 0; j < sizeCol; j++)
		{
			if (max < mtrx[i][j])
				max = mtrx[i][j];
			if (min > mtrx[i][j])
				min = mtrx[i][j];
		}
	cout << "Макс. элемент равен " << max << endl;
	cout << "Мин. элемент равен " << min << endl;


	for (int i = 0; i < sizeRow; i++)
		delete[] mtrx[i];
	delete[] mtrx;

	for (int e = 0; e < sizeRow2; e++)
		delete[] mtrx2[e];
	delete[] mtrx2;

	for (int r = 0; r < sizeRow; r++)
		delete[] prodMatrx[r];
	delete[] prodMatrx;

	delete[] arr;


	system("pause");
	return 0;

}