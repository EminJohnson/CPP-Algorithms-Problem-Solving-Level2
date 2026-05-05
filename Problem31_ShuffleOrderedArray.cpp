#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include<cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

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

void Swap(int& A, int& B)
{
    int Temp; 
    Temp = A;   
    A = B;      
    B = Temp;    
}


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void GetArryElement(vector <unsigned short>& vArry, unsigned short lengthNumber)
{
    for (int i = 1; i <= lengthNumber; i++)
    {
        vArry.push_back(i);
    }
}

void ShuffleArray(vector <unsigned short>& vArry, unsigned short lengthNumber)
{
    for (unsigned short i = 0; i < lengthNumber; i++)
    {
        
        unsigned short index1 = RandomNumber(1, lengthNumber) - 1;
        unsigned short index2 = RandomNumber(1, lengthNumber) - 1;

        
        swap(vArry[index1], vArry[index2]);
    }
}


void PrintArryElement(vector <unsigned short>& vArry)
{
    for (unsigned short& Element : vArry)
    {
        printf(" %hu", Element);
    }
}

int main()
{ 

    srand((unsigned)time(NULL));

    vector <unsigned short> vArry;
    unsigned short lengthNumber = 0;

    ReadLengthNumber(lengthNumber);
    GetArryElement(vArry, lengthNumber);

    cout << "\nArray elements before shuffle:\n";
    PrintArryElement(vArry);

    ShuffleArray(vArry, lengthNumber);
    cout << "\nArray elements after shuffle:\n";
    PrintArryElement(vArry);

    return 0;
}