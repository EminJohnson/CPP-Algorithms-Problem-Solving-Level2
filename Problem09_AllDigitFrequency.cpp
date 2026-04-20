#include <iostream>
#include <string>

using namespace std;

void GetValidateNumber (unsigned int& Number)
{
    while(true)
    {
        if(!(cin >> Number))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid!!, Enter a real Number : \n";
            continue;
        }

        if( Number <= 0 || Number >= 9999999)
        {
            cout << "Enter other Number : \n";
            continue;
        }
        break;
    }
}

unsigned int ReadNumber(string Message)
{
    unsigned int Number = 0;
    cout << Message;
    GetValidateNumber (Number);
    
    return Number;
}

unsigned short GetDigetFrequency(unsigned int Number, unsigned short TargetDigit)
{
    unsigned short Sum = 0;   
    unsigned short Remainder = 0;   
    
    
    while (Number > 0)
    {
        Remainder = Number % 10;  
        Number /= 10;     
        
       
        if (TargetDigit ==  Remainder)
        {
            Sum++;
        }
    }
    return Sum;  
}

void PrintAllDigitFrequency(unsigned int Number)
{
    for (unsigned short i = 1; i <= 9; i++)
    {
        unsigned short TargetDigit = 0;
        TargetDigit = GetDigetFrequency(Number, i);

        if (TargetDigit > 0)
        {
            cout << "Digit " << i << " Frequency is "
                 << TargetDigit << " Time (s)." << endl;
        }
    }
}


int main()
{
    PrintAllDigitFrequency(ReadNumber("Enter Your Number : \n"));

    return 0;
}
