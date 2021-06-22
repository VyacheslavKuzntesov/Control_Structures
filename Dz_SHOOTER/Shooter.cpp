#include<iostream>
#include<conio.h>

using namespace std;

#define Escape 27
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77

void main()
{
	setlocale(LC_ALL, "Russian");
	char key;
	int ammo = 20;
	do
	{
		key = _getch();
		switch (key)
		{
		case 87:
		case UP_ARROW:
		case 119:cout << "Вперед" << endl;
			break;
		case 115:
		case DOWN_ARROW:
		case 83:cout << "Назад" << endl;
			break;
		case 97:
		case LEFT_ARROW:
		case 65:cout << "Влево" << endl;
			break;
		case 100:
		case RIGHT_ARROW:
		case 68:cout << "Вправо" << endl;
			break;
		case ' ':cout << "Прыжок" << endl;
			break;
		case 13:
			if (ammo > 0)
			{
				ammo--;
				cout << "Огонь" << endl;
				cout << "Осталось " << ammo << " патронов" << endl;
			}
			else
			{
				cout << "Нужно перезаридить оружие(Кнопка R,r)" << endl;
			}
			break;
		case 114:
		case 82:
			ammo = 20;
			cout << "Оружие перезаряжено доступно " << ammo << " патронов" << endl;
			break;
		default:
			if (key != -32 && key != Escape)
			{
				cout << "Error" << endl;
			}
			break;
		}
	} while (key != Escape);
}