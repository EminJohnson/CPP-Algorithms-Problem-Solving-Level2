#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;
using std::stoi;


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

		if (Number <= 0 || Number > 9999)
		{
			cout << "Enter Oher Number : \n";
			continue;
		}
		break;
	}
}

string ReadNumber(string Message)
{
	unsigned short Number;
	cout << Message;
	GetValidateNumber(Number);
	return to_string(Number);
}

unsigned short CalculateSumOfDigits(string Number)
{
	unsigned short Sum = 0;
	string Num = "0";

	for (int i = Number.length() - 1; i >= 0; i--)
	{
		Num = Number[i];
		Sum += stoi(Num);

	}
	return Sum;
}

void PrintSumOfDigits(unsigned short Sum)
{
	cout << "Sum of Digits : " << Sum << endl;
}

int main()
{
	PrintSumOfDigits(CalculateSumOfDigits(ReadNumber("Enter a Number [0 -> 9999]: \n")));
}