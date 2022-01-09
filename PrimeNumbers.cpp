#include<iostream>
#include<vector>
using namespace std;

vector <int> PrimeNumbers;

bool isPrime(int num)
{
	if (num == 1)
		return false;
	else if (num == 2)
		return true;

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int lowerLimit, upperLimit;
	cout << "Enter lower limit: ";
	cin >> lowerLimit;

	cout << "Enter upper limit: ";
	cin >> upperLimit;

	while (lowerLimit <= upperLimit)
	{
		if (isPrime(lowerLimit))
		{
			PrimeNumbers.push_back(lowerLimit);
			lowerLimit++;
		}
		else if (!isPrime(lowerLimit))
			lowerLimit++;
	}

	cout << "Prime Numbers: ";

	for (int i = 0; i < PrimeNumbers.size(); i++)
	{
		cout << PrimeNumbers[i] << " ";
	}

	cout << endl << "Number of prime numbers in the given range: " << PrimeNumbers.size() << endl;

	system("pause>0");
	return 0;
}