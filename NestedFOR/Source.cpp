#include<iostream>
#include<conio.h>

using namespace std;

#define tab "\t"

//#define MULTIPLICATION_TABLE
//#define PIFAGOR_TABLE
//#define ROMBUS

void main()
{
	setlocale(LC_ALL, "Rus");
	//����� ���������� ����� �++ ����� ������� � ����� ������ ����������� �������� � if ����� ���������� while � ��� �����
	//�� ������ ����� �������� ��������� ����� � ����� �������� � ��������� ������ �� ��� ������� ����� ���� ��������� FOR
	//��������� For �������� ���
#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)//�������� i for
	{
		cout << "������� ��������� ��: " << i << endl;
		for (int j = 1; j <= n; j++)//���������  j for
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if ((i * j) < 10)cout << " ";
			if ((i * j) < 100)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

#ifdef PIFAGOR_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i * j < 10)cout << " ";
			if (i * j < 100)cout << " ";
			cout << i * j << tab;
		}
		cout << endl;
	}
#endif // PIFAGOR_TABLE

#ifdef ROMBUS

	int n;
	cout << "������� ������ ������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS
	
	int n;
	cout << "������� ������ ������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			
		}
		cout << endl;
	}
}