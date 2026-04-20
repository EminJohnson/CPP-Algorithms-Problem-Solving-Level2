#include <iostream>
#include <string>

using namespace std;

void GetValidateNumber(unsigned short& Number)
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

        if( Number < 1 || Number > 9)
        {
            cout << "Enter other Number [1 -> 9] : \n";
            continue;
        }
        break;
    }
}

unsigned short ReadNumber()
{
    unsigned short Number = 0;
    cout << "Enter Your Number : \n";
    GetValidateNumber(Number);
    return Number;
}

void InvertedNumberPattern(unsigned short Number)
{
    for (unsigned short i = 1; i <= Number; i++)
    {
        for (unsigned short j = i; j >= 1; j--)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    InvertedNumberPattern(ReadNumber());
}
