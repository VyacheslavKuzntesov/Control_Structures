#include<iostream>
#include<conio.h>

using namespace std;

#define tab "\t"
using std::cin;
using std::cout;
using std::endl;
//#define FACTORIAL
//#define POWER
//#define ASCIITABL

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef FACTORIAL
	int n;
	long double factorial = 1;
	cout << "������ ����� ��� ���������� ����������: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		factorial *= i;
		cout << factorial << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;//���������
	int n;//����������
	double N = 1;//�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a; //�������� ��������� ������� � �����������
		n = -n;//������ ���� �� ���������������
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCIITABL
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCIITABL

}