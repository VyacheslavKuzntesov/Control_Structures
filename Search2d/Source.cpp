#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");

	int const ROWS = 3;
	int const COLS = 5;
	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool appeared_earlier = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k==i?j:COLS); l++)
				{
					if (arr[i][j]==arr[k][l])
					{
						appeared_earlier = true;
						break;
					}
				}
				if (appeared_earlier)break;
			}
			if (appeared_earlier)continue;
			int repeat_count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j+1:0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])repeat_count++;
				}
			}
			if (repeat_count)printf("Value %d, repeats %d times\n", arr[i][j], repeat_count);
		}
	}
}