#include <iostream>
#include <string>

using namespace std;

void GetValidateNumber(unsigned int& Number)
{
    while(true)
    {
        if(!(cin >> Number))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid !!, Enter areal Number : \n";
            continue;
        }

        if( Number < 1 || Number > 9999999)
        {
            cout << "Enter other Number : \n";
            continue;
        }
        break;
    }
}

unsigned int ReadNumber()
{
    unsigned int Number = 0;
    cout << "Enter Your Number : \n";
    GetValidateNumber(Number);
    return Number;
}

unsigned int GetReverseNumber(unsigned int Number)
{
    unsigned short Remainder = 0;
    unsigned int Number02 = 0;
    while( Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        Number02 = Number02 * 10 + Remainder;   
    }
    return Number02;
}

bool IsPalindromeNumber (unsigned int Number)
{
    return (GetReverseNumber(Number) == Number);
}

void PrintResult(unsigned int Number)
{
    cout << ((IsPalindromeNumber (Number) ? " Yes , it is a Palindrome Number : \n" : "No , it is NOT a Palindrome Number : \n"));
}

int main()
{
    PrintResult(ReadNumber());
    return 0;
}
