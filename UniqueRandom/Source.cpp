#include<iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
//#define unique_1
#define unique_2

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
#ifdef unique_1
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
#endif // unique_1

#ifdef unique_2
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
#endif // unique_2

	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}