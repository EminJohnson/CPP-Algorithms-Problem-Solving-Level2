#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

void SumOf2Arrays(unsigned short arry1[100], unsigned short arry2[100], unsigned short arrSum[100], unsigned short lengthNumber);

unsigned short ReadLengthNumber(unsigned short& lengthNumber)
{
    while (true)
    {
        cout << "Enter Number of length (1-100): ";
        if (!(cin >> lengthNumber))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid!!, Enter a real Number.\n";
            continue;
        }

        if (lengthNumber < 1 || lengthNumber > 100)
        {
            cout << "Invalid Range! Enter a number between 1 and 100.\n";
            continue;
        }
        return lengthNumber;
    }
}

unsigned short RandomNumber(unsigned short From, unsigned short To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomElements(unsigned short arr[100], unsigned short length)
{
    for (unsigned short i = 0; i < length; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(unsigned short arr[100], unsigned short length)
{
    for (unsigned short i = 0; i < length; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void CopyArray(unsigned short arrSource[100], unsigned short arrDestination[100], unsigned short length)
{
    for (unsigned short i = 0; i < length; i++)
        arrDestination[i] = arrSource[i];
}

void SumOf2Arrays(unsigned short arry1[100], unsigned short arry2[100], unsigned short arrSum[100], unsigned short lengthNumber)
{
    
    for (unsigned short i = 0; i < lengthNumber; i++)
    {
        arrSum[i] = arry1[i] + arry2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    unsigned short arr[100], arr2[100], arrSum[100], lengthNumber = 0;

    ReadLengthNumber(lengthNumber);

    FillArrayWithRandomElements(arr, lengthNumber);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, lengthNumber);

    CopyArray(arr, arr2, lengthNumber);

    cout << "\nArray 2 elements after copy:\n";
    PrintArray(arr2, lengthNumber);


    SumOf2Arrays(arr, arr2, arrSum, lengthNumber);

    cout << "\nSum of arry1 and arry2 Alements :\n";
    PrintArray(arrSum, lengthNumber);


    return 0;
}
