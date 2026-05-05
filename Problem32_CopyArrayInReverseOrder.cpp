#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <vector>

using namespace std;

void Swap(unsigned short& A, unsigned short& B)
{
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}


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

void FillArrayWithRandomElements(vector <unsigned short>& vArr, unsigned short length)
{
    unsigned short Element = 0;

    for (unsigned short i = 0; i < length; i++)
    {
        Element = RandomNumber(1, 100);
        vArr.push_back(Element);
    }
}


void CopyArray(vector<unsigned short>& vSource, vector<unsigned short>& vDestination)
{
    for (unsigned short& Element : vSource)
    {
        vDestination.push_back(Element);
    }
}

void PrintArray(vector <unsigned short>& vArry)
{
    for (unsigned short& Element : vArry)
    {
        printf(" %hu", Element);
    }
}


void ReverseArray(vector<unsigned short>& vArry)
{
    unsigned short n = vArry.size();
    for (unsigned short i = 0; i < n / 2; i++)
    {
        std::swap(vArry[i], vArry[n - 1 - i]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    unsigned short lengthNumber = 0;

    vector <unsigned short> vArr, vArr2;

    ReadLengthNumber(lengthNumber);

 
    FillArrayWithRandomElements(vArr, lengthNumber);

    cout << "\nArray 1 elements (Original):\n";
    PrintArray(vArr);

    CopyArray(vArr, vArr2);

    ReverseArray(vArr2);

    cout << "\nArray 2 elements after copy and reverse:\n";
    PrintArray(vArr2);

    return 0;
}

