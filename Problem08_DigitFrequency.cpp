#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

struct StInfo
{
	string Number;
	string NumberFrequency;
};

void GetValidateNumber(unsigned int& Number)
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

		if (Number <= 0 || Number > 9999999)
		{
			cout << "Enter Oher Number : \n";
			continue;
		}
		break;
	}
}

StInfo ReadNumber()
{
	StInfo Info;
	unsigned int Number = 0;
	unsigned int NumberFrequency = 0;
	cout << "Enter a Number [0 -> 9999999]: \n";
	GetValidateNumber(Number);
	Info.Number = to_string(Number);

	do
	{
		cout << "Enter a Number [1 -> 9]: \n";
		GetValidateNumber(NumberFrequency);
	} while (NumberFrequency < 1 || NumberFrequency > 9);
	Info.NumberFrequency = to_string(NumberFrequency);

	return Info;
}


unsigned short CalculateFigitFrequency(StInfo Info)
{
	unsigned short Sum = 0;

	for (int i = 0; i <= Info.Number.length() - 1; i++)
	{
		if (Info.Number[i] == Info.NumberFrequency[0]) Sum++;
	}

	return Sum;
}

void PrintFigitFrequency(unsigned short Sum)
{
	cout << Sum << endl;
}

int main()
{
	PrintFigitFrequency(CalculateFigitFrequency(ReadNumber()));
}