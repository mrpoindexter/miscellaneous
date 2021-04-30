#include<iostream>
using namespace std;

int digitNumber(int number1)
{
	int count = 0;
	while(number1 != 0)
	{
		number1 /= 10;
		count++;
	}
	return count;
}

int sumOfDigits(int number2)
{
	int a;
	int sum = 0;
	while (number2 != 0)
	{
		a = number2 % 10;
		number2 /= 10;
		sum += a;
	}
	if (digitNumber(sum) == 1)
		return sum;
	else
		return sumOfDigits(sum);
}


int main()
{
	int number3;
	cout << "Enter a number: "<< endl;
	cin >> number3;
	cout << "Sum of individual digits: " << sumOfDigits(number3) << endl;
	if (sumOfDigits(number3) == 3 || sumOfDigits(number3) == 6 || sumOfDigits(number3) == 9)
		cout << "Divisible by 3" << endl;
	else
		cout << "Not divisible by 3" << endl;

	system("pause>0");
	return 0;
}
