#include<iostream>
using namespace std;

class twoVariables {

public:
	int array1[2][3];
	int x, y;
	int range;

	void coefficients()
	{
		cout << "Enter the coefficients " << endl;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cin >> array1[i][j];
			}
		}
	}

	int equation1(int X, int Y)
	{
		return X * array1[0][0] + Y * array1[0][1];
	}

	int equation2(int X, int Y)
	{
		return X * array1[1][0] + Y * array1[1][1];
	}

	void solution()
	{
		cout << "Enter range ";
		cin >> range;

		for (int i = -range; i <= range; i++)
		{
			for (int j = -range; j <= range; j++)
			{
				if (equation1(i, j) == array1[0][2] && equation2(i, j) == array1[1][2])
				{
					x = i;
					y = j;
					break;
				}
			}
		}
	}
};

class threeVariables {

public:
	int array1[3][4];
	int x, y, z;
	int range;

	void coefficients()
	{
		cout << "Enter the coefficients " << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cin >> array1[i][j];
			}
		}
	}

	int equation1(int X, int Y, int Z)
	{
		return X * (array1[0][0]) + Y * (array1[0][1]) + Z * (array1[0][2]);
	}

	int equation2(int X, int Y, int Z)
	{
		return X * (array1[1][0]) + Y * (array1[1][1]) + Z * (array1[1][2]);
	}

	int equation3(int X, int Y, int Z)
	{
		return X * (array1[2][0]) + Y * (array1[2][1]) + Z * (array1[2][2]);
	}

	void solution()
	{
		cout << "Enter the range ";
		cin >> range;

		for (int i = -range; i <= range; i++)
		{
			for (int j = -range; j <= range; j++)
			{
				for (int k = -range; k <= range; k++)
				{
					if (equation1(i, j, k) == array1[0][3] && equation2(i, j, k) == array1[1][3] && equation3(i, j, k) == array1[2][3])
					{
						x = i;
						y = j;
						z = k;
						break;
					}
				}
			}
		}
    }
};

int main()
{
	threeVariables v3;
	twoVariables v2;
	int res;

	cout << "Solving simultaneous equations for integer solutions within a provided range" << endl;

	do {

		cout << "Enter 1 to exit , 2 for two unknowns and 3 for three unknowns ";
		cin >> res;

		if (res == 2)
		{
			v2.coefficients();
			v2.solution();

			cout << "x = " << v2.x << " , y = " << v2.y << endl;
		}
		if (res == 3)
		{
			v3.coefficients();
			v3.solution();

			cout << "x = " << v3.x << " , y = " << v3.y << " , z = " << v3.z << endl;
		}
	} while (res != 1);

	return 0;
}