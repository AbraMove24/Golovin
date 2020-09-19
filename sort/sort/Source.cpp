#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Vvedite kol-vo elementov : ";
	cin >> size;
	int* a = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Vvedite element pod nomerom " << i + 1 << ": ";
		cin >> a[i];
	}
	int step = size / 2;
	while (step > 0)
	{
		for (int i = 0; i < (size - step); i++)
		{
			int j = i;
			while (j >= 0 && a[j] > a[j + step])
			{
				int temp = a[j];
				a[j] = a[j + step];
				a[j + step] = temp;
				j--;
			}
		}
		step = step / 2;
	}
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << ' ';
	}
	return 0;
}