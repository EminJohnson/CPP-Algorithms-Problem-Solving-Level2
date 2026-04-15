#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void GetValidateNumber(unsigned short& Number)
{
	while (true)
	{
		if (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid!!, Enter a Real Number: \n";
			continue;
		}

		if (Number <= 0 || Number > 30000)
		{
			cout << "Enter Oher Number : \n";
			continue;
		}
		break;
	}
}

unsigned short ReadNumber(string Message)
{
	unsigned short Number;
	cout << Message;
	GetValidateNumber(Number);

	return Number;
}

unsigned int CalculateSumOfAllDivisors(unsigned short Number)
{
	unsigned int Sum = 0;

	for (int i = 1; i <= Number / 2; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}

	return Sum;
}

bool IsPerfect(unsigned short Number)
{
	unsigned int Sum = CalculateSumOfAllDivisors(Number);
	return (Number == Sum);
}

void PrintResult(unsigned short Number)
{
	cout << Number << (IsPerfect(Number) ? " Is Perfect .\n" : " Is Not Perfect . \n");
}

int main()
{
	PrintResult(ReadNumber("Enter a Number : \n"));
}