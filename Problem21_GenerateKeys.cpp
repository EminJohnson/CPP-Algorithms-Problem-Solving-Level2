#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum EnRandom { SmallLetter = 1, CapitalLetter = 2, SecialC = 3, Digit = 4 };

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

        if (Number < 1 || Number > 3200)
        {
            cout << "Enter other Number [1 -> 3200] : \n";
            continue;
        }
        break;
    }
}

unsigned short ReadNumber()
{
    unsigned short Number = 0;
    cout << "Enter Your Number of Kays: \n";
    GetValidateNumber(Number);
    return Number;
}

unsigned short RandomNumber(unsigned short From, unsigned short To)
{
    unsigned short  Random = rand() % (To - From + 1) + From;

    return Random;
}

char GetRandomChar(EnRandom Char)
{
    switch (Char)
    {
    case EnRandom::SmallLetter:  return char(RandomNumber(97, 122)); break;

    case EnRandom::CapitalLetter: return char(RandomNumber(65, 90));  break;

    case EnRandom::SecialC:      return char(RandomNumber(33, 47));  break;

    case EnRandom::Digit:        return char(RandomNumber(48, 57));  break;
    }
    return '0';
}

string GenerateWord(EnRandom Char, unsigned short Length)
{
    string Word; 

    for (int i = 1; i <= Length; i++)
    {
        Word += GetRandomChar(Char);
    }
    return Word;
}

string GenerateKey()
{
    string Key = ""; 
    Key = GenerateWord(EnRandom::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(EnRandom::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(EnRandom::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(EnRandom::CapitalLetter, 4);

    return Key;
}

void PrintGenerateKeys(unsigned short KeysNumber)
{
    for (int i = 1; i <= KeysNumber; i++)
    {
        cout << "Key [" << i << "] : ";
        cout << GenerateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    
    PrintGenerateKeys(ReadNumber());

    return 0;
}
