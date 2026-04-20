#include <iostream>
#include <string>

using namespace std;

void GetValidateNumber(int& Number)
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

void  ReadNumber(int& Number, int& TargetDigit)
{
    cout << "Enter Your Number : \n";
    GetValidateNumber(Number);

    do
    {
       cout << "Enter Your Target Digit : \n";
       GetValidateNumber(TargetDigit);
    } 
    while (TargetDigit <= 0 || TargetDigit >= 10);
    
}

unsigned short GetDigetFrequency(int Number, int TargetDigit)
{
    int Sum = 0;   
    int Remainder = 0;   
    
    
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

void PrintDigitFrequency (int Number, int TargetDigit)
{
     cout << "DigitFrequency of  " << Number << " if your Target Digit: " << TargetDigit
          << " is " << GetDigetFrequency(Number, TargetDigit)  << endl;
}

int main()
{
    int Number, TargetDigit;
    ReadNumber(Number, TargetDigit);
    PrintDigitFrequency(Number, TargetDigit);

    return 0;
}
