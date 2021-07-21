#include<iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");
	//массив предстовляет собой набор однотипных значений в непрерывной области памяти по этому одномерный массив отображают ввиде строки
	//Двумерный же массив представляет таблицу значений как и  в любой другой таблицы в двумерном массиве есть строки(ряды) и столбики() в свою очередь строки двумерного также находятся в стеке непрерывной памяти не смотря на точ что двум мас являеться таблицей в памяти он хранится как большой одномерный массив
	//Как строки двумерного массива так и элементы каждой ряды(строки) нумеруются с 0
	//Для обращения к элементам двухмерного массива испол вложенный цикл в котором i-ряды j-элементы строки
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS];
	/*int arr1[ROWS][COLS] = 
	{
		{3,5,8},
		{13,21,34},
		{55,89,144},
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr1[i][j] << tab;
		}
		cout << endl;
	}*/
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}

	cout << endl;
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i?j+1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << "Массив отсортирован за " << iterations << " итераций";
}