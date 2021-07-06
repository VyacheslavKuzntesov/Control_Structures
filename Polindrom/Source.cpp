#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int number = 0, revers_number = 0, copy = 0;
	cout << "Введите число: "; cin >> number;
	copy = number;
	while (copy > 0)
	{
		revers_number *= 10;
		revers_number += copy % 10;
		copy /= 10;
	}
	if (revers_number==number)
	{
		cout << "Число палиндром";
	}
	else
	{
		cout << "Число не палиндром";
	}
}