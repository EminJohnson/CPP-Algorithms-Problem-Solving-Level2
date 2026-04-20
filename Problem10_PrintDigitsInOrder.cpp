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

        if( Number < 1 || Number > 9999)
        {
            cout << "Enter other Number : \n";
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

unsigned short GetReverseNumber(unsigned short Number)
{
    unsigned short Remainder = 0;
    unsigned short Number02 = 0;
    while( Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        Number02 = Number02 * 10 + Remainder;   
    }
    return Number02;
}

void PrintDigitsInOrder(unsigned short Number)
{
    unsigned short Remainder = 0;
    while( Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        cout << Remainder << endl;
    }

}

int main()
{
    PrintDigitsInOrder(GetReverseNumber(ReadNumber()));
    
    return 0;
}
