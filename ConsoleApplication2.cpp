#include <iostream>
using namespace std;



void FeelArray(int** arr, int row, int col)    //Function That Feels Array With Random Numbers
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			arr[i][j] = rand() % 30 + 30;
		}
	}
}

void FindMaxAndMin(int** arr, int row, int col)  //Function That Finds Max and Min
{
	int min = arr[0][3];
	int max = arr[0][0];
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			 }

			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}

	cout << " Max Number Of Array = " << max << " Min Number of Array " << min << endl;
}

int main()
{
	srand(time(NULL));
	int row = 0;
	cout << " Enter Rows of Array " << endl;
	cin >> row;
	int col = 0;
	cout << " Enter Colons of Array " << endl;
	cin >> col;

	cout << endl;

	int** arr = new int* [row];

	for (int i = 0;i < row;i++)
	{
		arr[i] = new int[col];
	}

	FeelArray(arr, row, col);

	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			cout << arr[i][j] << "\t";   
		}
		cout << endl;
	}
	cout << "\n";

	FindMaxAndMin(arr, row, col);

	for (int i = 0;i < row;i++)
	{
		delete[]arr;
	}

	delete[]arr;
}