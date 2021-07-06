#include<iostream>

using namespace std;

#define tab					"\t"
#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define DOWN_RIGHT_ANGLE	(char)217
#define DOWN_LEFT_ANGLE		(char)192
#define HORIZONTAL_LINE		(char)196 << (char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			"\xDB\xDB"				//(char)219 << (char)219
#define BLACK_BOX			"\x20\x20"				//(char)32 << (char)32

using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C"); //Выставляет кодировку по умолчанию
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			//cout << "* ";
				 if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else 
			{
				/*if ((i + j) % 2 == 0)cout << WHITE_BOX; else cout << BLACK_BOX;*/
					 //(i + j) % 2 == 0 ? cout << WHITE_BOX : cout << BLACK_BOX;
				 cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);
			}
		}
		cout << endl;
	}

	//for (int i = 128; i < 256; i++)
	//{
	//	/*if (i % 16 == 0)cout << endl;*/
	//	cout << i << tab << (char)i << endl;
	//}
	/*
	Тернарный оператор(condition ? value1(true) : value2(false);)
	Подобно конструкции if... else... которая выполняет один из двух вариантов кода взависимости от не которого условия тернарный оператор (?) возвращает одно из двух значений взависимости от условия
	Он отличается от конструкции if else тем что if просто выполняет код и не возвращает никаких значений а тернарный оператор как и любой другой оператор возвращает значение value1 или value2 что позволяет сделать его частью выражения в отличии от if else
	value1 и value2 обязательны должны быть одного типа
	*/
}