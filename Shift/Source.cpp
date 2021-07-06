#include<iostream>
#include<Windows.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");

	//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//COORD buffer = { 80,50 };
	//SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &buffer); //На весь экрвн
	
	//const int n = 10;
	//int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	////вывод исходного массива
	//for (int i = 0; i < n; i++)
	//{
	//	cout << arr[i] << tab;
	//}
	//cout << endl;
	//
	//int number_of_shift;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shift;

	////Сдвиг массива
	//for (int i = 0; i < number_of_shift; i++)
	//{
	//	int buffer = arr[0];
	//	for (int i = 0; i < n; i++)
	//	{
	//		arr[i] = arr[i + 1];
	//	}
	//	arr[n - 1] = buffer;
	//}

	////вывод сдвинутого массива
	//for (int i = 0; i < n; i++)
	//{
	//	cout << arr[i] << tab;
	//}
	//cout << endl;
	//cout << 11 % 2;

	// Заполнение массива случайными числами
	/*
		rand() - возвращает псевдо случайное число в диапозоне от 0 до 32 767 (MAX_RAND)
	*/
	const int n = 10;
	int arr[n];
	int table;
	// int arr[n] = {}; - заполняет массив 0

	// Заполнение массива случайными числами
	int minRand, maxRand;
	cout << "Введите минимальное случайное число: "; cin >> minRand;
	cout << "Введите максимальное случайное число: "; cin >> maxRand;
	cout << maxRand - minRand << endl;
	for (int i = 0; i < n; i++)
	{	
		arr[i] = rand() % (maxRand - minRand) + minRand; // Остаток от деления всегда строго меньше делителя
	}

	//Вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
	//Сортировка массива:
	for (int i = 0; i < n; i++)
	{
		for (int j = 1+i; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				table = arr[i];
				arr[i] = arr[j];
				arr[j] = table;
			}
		}
	}

	//Вывод отсортировоного массива массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}