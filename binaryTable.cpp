#include<iostream>
#include<iomanip>
using namespace std;

int toBinary(int num)
{
	int rem;
	int count = -1;
	int sum = 0;
	while (num != 0)
	{
		rem = num % 2;
		num /= 2;
		count++;
		sum += pow(10, count) * rem;
	}
	return sum;
}

void binaryTable(int a, int b)
{
	cout << "Decimal to Binary" << endl;
	cout << "--------------------" << endl;
	cout << setw(4) << "Decimal" << setw(4) << "|" << setw(10) << "Binary" << endl;
	for (int i = a; i <= b; i++)
	{
		cout << setw(4) << i << setw(7) << "|" << setw(10) << toBinary(i) << endl;
	}
	cout << endl << endl;
}


int main()
{
	cout << "Enter a range: ";
	int a, b;
	cin >> a >> b;

	binaryTable(a, b);

	system("pause>0");
	return 0;
}
