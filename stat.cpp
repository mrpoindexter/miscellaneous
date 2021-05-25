#include<iostream>
#include<cmath>
using namespace std;

int array1[] = { 112,121,126,108,141,104,136,134,121,118,143,116,108,122,127,140,113,117,126,130,134,120,131,133,118,125,151,147,137,140,132,119,110,124,132,152,135,130,136,128 };

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
    }
}

void Print(int array[], int size)
{
	int* ptr;
	ptr = array;
	for (int i = 0; i < size; i++)
	{
		cout << *(ptr + i) << " ";
	}
	cout << endl;
}

 class statistics
{
public:

	void minAndMax(int array[], int size, int* min, int* max)
	{

		for (int i = 0; i < size; i++)
		{
			if (array[i] < *min)
				*min = array[i];
			if (array[i] > *max)
				*max = array[i];
		}
	}

	int findK(int frequency)
	{
		int k;
		for (int i = 0; i < frequency; i++)
		{
			if (pow(2,i) > frequency)
			{
				k = i;
				break;
			}
		}
		return k;
	}
	int frequency(int array2[], int size, int lowL, int upL)
	{
		int count = 0;
		for (int i = 0; i < size; i++)
		{
			if (array2[i] >= lowL && array2[i] < upL)
			{
				count++;
			}
		}
		return count;
	}


};

int main()
{
	statistics s;

	int upL, lowL;
	int cumulative = 0;
	int H = array1[0];
	int L = array1[0];
	int size = sizeof(array1) / sizeof(array1[0]);
	bubbleSort(array1, size);
	Print(array1, size);
	int freq[1000];
	cout << "Total data: " << size << endl;
	s.minAndMax(array1, size, &L, &H);
	cout << "MIN: "<<L << endl;
	cout << "MAX: "<<H << endl;
	int k = s.findK(size);
	cout << "k: " << k << endl;
	double classWidth = (H - L) / k;
	cout << "Class width: " << classWidth << endl;
	do {
		cout << "Range: " << L << " - " << L + classWidth<< endl;
		int frequency = s.frequency(array1, size, L, L+classWidth);
		L += classWidth;
		double relativeFrequency = (double)frequency / (double)size;
		cumulative += frequency;
		cout << "Tally: ";
		for (int i = 1; i <= frequency; i++)
		{
			cout << "/";
			if (i % 5 == 0)
			{
				cout << "\t";
			}
		}
		cout << endl;
		cout << "Frequency: " << frequency << endl;
		cout << "Cumulative frequency: " << cumulative << endl;
		cout << "Relative frequency: " << relativeFrequency << endl<< endl;
	} while (cumulative != size);

	system("pause>0");
	return 0;
}
