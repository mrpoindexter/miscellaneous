#include<iostream>
using namespace std;

void Print(int array1[], int size)
{
	int* ptr = array1;
	for (int i = 0; i < size; i++)
	{
		cout << *(ptr + i) << " ";
	}
	cout << endl;
}

int* selfMadeFibo(int first, int size)
{
	int* series = new int[size];
	series[0] = 0;
	int sum = first;

	for (int i = 1; i < size; i++)
	{
		if (i >= 2)
		{
			sum = series[i-1] + series[i - 2];
		}
		series[i] = sum;
	}

	return series;
}

int main()
{
	int limit;
	int startingValue;

	cout << "Creating a fibonacci series of your own." << endl;
	cout << "Enter the starting value and limit respectively: " << endl;
	cin >> startingValue >> limit;
	cout << endl;

	Print(selfMadeFibo(startingValue, limit), limit);

	system("pause>0");
	return 0;
}
