#include<iostream>
#include<Windows.h>
//http://cplusplus.com/doc/tutorial/arrays/
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");

	const int n = 10;
	int arr[n];
	int minRand, maxRand;
	int povtoreniya = 1;
	int povtorpred = 0;

	cout << "Введите минимальное случайное число: "; cin >> minRand;
	cout << "Введите максимальное случайное число: "; cin >> maxRand;

	/*for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}*/

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 1+i; j < n; j++)
		{
			if (arr[i] == arr[j] && i != 0)
			{
				for (int k = 0; k < i; k++)
				{
					if (arr[i] == arr[k])
					{
						povtorpred = 1;
					}
				}
				if (povtorpred == 0)
				{
					povtoreniya++;
				}
			}
			else if (arr[i] == arr[j])
			{
				povtoreniya++;
			}
		}
		if (povtoreniya > 1)
		{
			cout << arr[i] << " повторяется " << povtoreniya << endl;
		}
		povtoreniya = 1;
		povtorpred = 0;
	}
}