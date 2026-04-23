#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

enum EnRandom { SmallLetter = 1, CapitalLetter = 2, SecialC = 3, Digit = 4};

unsigned short RandomNumber(unsigned short From, unsigned short To)
{
    unsigned short  Random = rand() % (To -From + 1) + From;

    return Random;
}

char GetRandomChar(EnRandom Char)
{ 
    switch (Char)
    {
    case EnRandom::SmallLetter :  return char(RandomNumber(97, 122)); break;  
    
    case EnRandom::CapitalLetter: return char(RandomNumber(65, 90));  break;
    
    case EnRandom::SecialC :      return char(RandomNumber(33, 47));  break;
  
    case EnRandom::Digit :        return char(RandomNumber(48, 57));  break;
    }
    return '0';
}

void PrintRandomChars()
{
    cout << "Small Letter  : " << GetRandomChar(EnRandom::SmallLetter) << endl;
    cout << "Capital Letter: " << GetRandomChar(EnRandom::CapitalLetter) << endl;
    cout << "Special Char  : " << GetRandomChar(EnRandom::SecialC) << endl;
    cout << "Digit         : " << GetRandomChar(EnRandom::Digit) << endl;
}



int main()
{
    srand((unsigned)time(NULL));
    PrintRandomChars();
    return 0;
}
