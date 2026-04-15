#include <iostream>
#include <string>

enum EnIsPrime { Prime = 1, NotPrime = 2 };

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

EnIsPrime IsPrime(unsigned short Number)
{

	for (int i = 2; i < Number; i++)
	{
		if (Number % i == 0) return EnIsPrime::NotPrime;;

	}
	return EnIsPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(unsigned short Number)
{
	cout << "\nPrime Numbers from 1 to " << Number << " are: \n";
	for (unsigned short i = 1; i <= Number; i++)
	{

		if (IsPrime(i) == EnIsPrime::Prime)
		{
			cout << i << "\t";
		}
	}
	cout << "\n";
}

int main()
{
	PrintPrimeNumbersFrom1ToN(ReadNumber("Enter a Number : \n"));
}