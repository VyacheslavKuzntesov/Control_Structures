#include<iostream>

using namespace std;

#define tab "\t"
#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define DOWN_RIGHT_ANGLE	(char)217
#define DOWN_LEFT_ANGLE		(char)192
#define HORIZONTAL_LINE		(char)196 << (char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			"\xDB\xDB"
#define BLACK_BOX			"\x20\x20"

using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << ((i + k) % 2 == 0 ? WHITE_BOX : BLACK_BOX);
				}
			}
			cout << endl;
		}
		//cout << endl;
	}
}