#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

enum EnPrimeOrNot{ Prime = 1, NotPrime = 2};

void CopyOnlyPrimaryNumbers(unsigned short arry1[100], int arry2[100], int arrLength, unsigned short &arr2Lenght);

unsigned short ReadNumber(string Message)
{
    unsigned short ArryLength = 0;
    cout << Message;
    
    while (true)
    {
        if (!(cin >> ArryLength))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid !!, Enter areal NUmber : \n";
            continue;
        }

        if (ArryLength < 1 || ArryLength > 100)
        {
            cout << "Invalid !!, Enter a NUmber [1 -> 100] : \n";
            continue;
        }

        return ArryLength;
    }
}

unsigned short GetRandom(unsigned short From, unsigned short To)
{
    return rand() % (To -From + 1) + From;
}

void FillArrayWithRandomElements(unsigned short arr[100], unsigned short length)
{
    for (unsigned short i = 0; i < length; i++)
    {
        arr[i] = GetRandom(1, 100);
    }
}

void PrintArray(unsigned short arr[100], unsigned short length)
{
    for (unsigned short i = 0; i < length; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

EnPrimeOrNot IsPrime(unsigned short Number)
{
    if (Number < 2) return EnPrimeOrNot::NotPrime;

    for (int i = 2; i <= Number / 2; i++)
    {
        if (Number % i == 0) return EnPrimeOrNot::NotPrime;
    }

    return EnPrimeOrNot::Prime;
}

void CopyOnlyPrimarNumbers(unsigned short arry1[100], unsigned short arry2[100], unsigned short arrLength, unsigned short &arr2Lenght)
{
    int Counter = 0; 
    
    for (int i = 0; i < arrLength; i++)
    {
        if (IsPrime(arry1[i]) == EnPrimeOrNot::Prime)
        {
           
            arry2[Counter] = arry1[i];
            Counter++;  
        }
    }
    
    arr2Lenght = Counter;
}

int main ()
{
    srand((unsigned)time(NULL));

    unsigned short arry1[100], ArryLength = ReadNumber("Enter a number [ 1 -> 100] ");

    FillArrayWithRandomElements(arry1, ArryLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arry1, ArryLength);

    unsigned short arr2Lenght = 0, arry2[100]; 

    CopyOnlyPrimarNumbers(arry1, arry2, ArryLength, arr2Lenght);

    cout << "\nArray 2 elements: [Only Prime NUmbers]\n";
    PrintArray(arry2, arr2Lenght);

    return 0;
}
