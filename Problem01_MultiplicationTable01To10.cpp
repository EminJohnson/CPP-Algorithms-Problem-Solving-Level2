#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void PrintTableHeader()
{
	cout << "\n\n\t\t\tMultiplication Table From 1 To 10 \n\n";

	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}
	cout << "\n------------------------------------------------------------------------------------\n";
}

string PrintColum(unsigned short i)
{
	return (i < 10) ? "   |" : "  |";
}

void PrintMultiplicationTable()
{
	for (unsigned short i = 1; i <= 10; i++)
	{
		cout << " " << i << PrintColum(i);
	
		for (unsigned short j = 1; j <= 10; j++)
		{
			cout << "\t" << i * j;
		}
		cout << "\n";
	}
}

int main()
{
	PrintTableHeader();
	PrintMultiplicationTable();
}