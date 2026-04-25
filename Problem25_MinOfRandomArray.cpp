#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::endl;

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

unsigned short RandomNumber(unsigned short From, unsigned short To)
{
    unsigned short  Random = rand() % (To - From + 1) + From;

    return Random;
}

unsigned short  GetArryRandomElement(unsigned short arry[100], unsigned short Number)
{
    for (unsigned short i = 0; i < Number; i++)
    {
        arry[i] = RandomNumber( 1, 100);
    }

    return arry[100];
}

void PrintArryRandomElement(unsigned short arry[100], unsigned short Number)
{
    cout << "\nArray Elements : ";
    for (int i = 0; i <Number; i++)
        cout << arry[i] << " ";

    cout << "\n";
}

unsigned short PrintMinNumber(unsigned short arry[100], unsigned short Number)
{
    unsigned short Mix = arry[0];

    for (unsigned short i = 0; i < Number; i++)
    {
        if (arry[i] < Mix) Mix = arry[i];
    }
    
    return Mix;
}

void PrintFunction(unsigned short arry[100], unsigned short Number)
{
    PrintArryRandomElement(arry, Number);
    cout << "\n Max Number is : " << PrintMinNumber(arry, Number) << endl;
}

int main()
{
    srand((unsigned)time(NULL));

	unsigned short arry[100] = {0}, Number = 0;

    cout << ReadNumber("Enter a Number [ 1 -> 100 ] \n", Number) << endl;

    GetArryRandomElement(arry, Number);
    PrintFunction(arry, Number);

    return 0;
}