#include <iostream>
#include <string>

using namespace std;

enum EnPerfectNotPerfect{Perfect = 1, NotPerfect = 2};

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

        if( Number < 0 || Number >=32000)
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

unsigned short  GetSumofDividesNumber(unsigned short Number)
{
    unsigned short sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
        {
            sum += i; 
        }
    }
    return sum;
}

EnPerfectNotPerfect IsPerfect(unsigned short Number)
{
    unsigned short Sum = GetSumofDividesNumber(Number);

    if (Number == Sum) return EnPerfectNotPerfect::Perfect;
    else return EnPerfectNotPerfect::NotPerfect; 
}

void PerfectNumberfrom1ToN(unsigned short Number)
{
    for (int i = 1; i <= Number; i++)
    {
       if (IsPerfect(i) == EnPerfectNotPerfect::Perfect) cout << i << "\t";
    }
}

int main()
{
    PerfectNumberfrom1ToN(ReadNumber());
    return 0;
}
