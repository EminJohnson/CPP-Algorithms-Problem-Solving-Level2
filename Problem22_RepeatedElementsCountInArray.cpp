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
            cout << "Invalid !!, Enter areal Number : \n";
            continue;
        }

        if (Number < 1 || Number > 100)
        {
            cout << "Enter other Number [1 -> 100] : \n";
            continue;
        }
        break;
    }
}

unsigned short ReadNumber(string Message, unsigned short& Number)
{
    cout << Message;
    GetValidateNumber(Number);
    return Number;
}

void InputElement(unsigned short Number, unsigned short arry[100])
{
    for (unsigned short i = 0; i < Number; i++)
    {
        cout << "Enter your [" << i + 1 << "] Element : ";
        GetValidateNumber(arry[i]);
    }
}

void PrintOriginArray(unsigned short Number, unsigned short arry[100])
{
    for (unsigned short i = 0; i < Number; i++)
    {
        cout  << arry[i] << " ";
    }
}

unsigned short CheckNumber(unsigned short NumberWChecking, unsigned short arry[100], unsigned short Number)
{
    unsigned short Count = 0;

    for (unsigned short i = 0; i < Number; i++)
    {
        if (arry[i] == NumberWChecking)
        {
            Count++;
        }
    }

    return Count;
}

void PrintResult(unsigned short NumberWChecking, unsigned short arry[100], unsigned short Number)
{
    cout << "Origine Array : "; PrintOriginArray(Number, arry);

    cout << "\n\n" << NumberWChecking << " is repeated " << CheckNumber(NumberWChecking, arry, Number) << " time (s) \n";
}

int main()
{
    unsigned short arry[100], Number = 0, NumberWChecking = 0;

    InputElement(ReadNumber("Enter Your Number of Element: \n", Number), arry);

    cout << "\n\n" << ReadNumber("Enter the Number you want to check : ", NumberWChecking) << endl;

    PrintResult(NumberWChecking, arry, Number);

    return 0;
}
