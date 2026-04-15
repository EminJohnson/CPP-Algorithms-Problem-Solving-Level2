#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

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


void PrintDigitsInAReversedOrder(string Number)
{
	for (int i = 3; i >= 0; i--)
	{
		cout << Number[i] << endl;
	}

}

int main()
{
	PrintDigitsInAReversedOrder(ReadNumber("Enter a Number [0 -> 9999]: \n"));
}