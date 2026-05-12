#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

void PrindHeadTable()
{

	cout << setw(60) << "Multiplication Table From 1 to 10" << endl;
	cout << "\n---------------------------------------------------------------------------------------\n";
	cout << "    ";
	for (int i = 1; i <= 10; i++)
	{
		cout << setw(8) << i;
	}

	cout << "\n---------------------------------------------------------------------------------------\n";
}

void PrintBodyMultiplicationTable()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << setw(2) << i << setw(2) << "|";
		for (int j = 1; j <= 10; j++)
		{
			cout << setw(8) << i * j;
		}
		cout << endl;
	}
}

int main()
{
	PrindHeadTable();
	PrintBodyMultiplicationTable();
	return 0;
}
