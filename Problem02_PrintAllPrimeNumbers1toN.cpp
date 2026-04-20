#include <iostream>

using namespace std;

enum EnPrimeNotPrime{ Prime = 1, NotPrime = 2};

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

EnPrimeNotPrime IsPrime(unsigned short Number)
{

    if (Number == 1) return EnPrimeNotPrime::Prime;

    for (int i = 2; i <= Number / 2; i++)
    {
        if (Number % i == 0) return EnPrimeNotPrime::NotPrime;
    }
    return EnPrimeNotPrime::Prime;
}

void PrintAllPrimeNumbers1toN(unsigned short Number)
{
   for (int i = 1; i <= Number; i++)
   {
       if  (IsPrime(i) == EnPrimeNotPrime ::Prime) cout << i << "\t";
   }
}

int main()
{
    PrintAllPrimeNumbers1toN(ReadNumber());
}
