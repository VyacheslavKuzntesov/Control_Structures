#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Поиск повторений
	for (int i = 0; i < n; i++)
	{
		bool have_been_earlyer = false;
		for (int k = 0; k < i; k++)
		{
			if (arr[i] == arr[k])
			{
				have_been_earlyer = true;
				break;
			}
		}
		if (have_been_earlyer)continue;
		int count = 0;
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] == arr[j])count++;
		}
		//if (count > 0)cout << "Значение " << arr[i] << " повторяется " << count << " раз" << endl;
		if (count > 0)printf("Значение %d встречается %d раз.\n", arr[i],count);
	}
}