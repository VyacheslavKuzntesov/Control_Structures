#include<iostream>
#include<Windows.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
//#define dec_2_bin
//#define dec_2_hex

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef dec_2_bin
	unsigned long long int decimal;
	const int n = sizeof(unsigned long long int) * 8;
	bool bin[n] = {};
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;
	for (; decimal; decimal /= 2)bin[i++] = decimal % 2;
	/*while (decimal>0)
	{
		bin[i++] = decimal % 2;
		decimal /= 2;
	}*/

	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif // dec_2_bin

#ifdef dec_2_hex
	int decimal;
	const int n = sizeof(int) * 2;//1 байт = 2 HEX разряда
	char hex[n] = {};
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;
	for (; decimal; decimal /= 16)hex[i++] = decimal % 16;
	for (--i; i >= 0; i--)
	{
		//if (hex[i] < 10)cout << (hex[i] + 48);
		//else cout << char(hex[i] + 55);
		cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));
	}
	cout << endl;
#endif // dec_2_hex


}