#include <iostream>

using namespace std;

void PrintHeader()
{
    cout << "\n\n\t\t\tMultiplication Table From 1 to 10 : \n\n";
    for (int i = 1; i <= 10; i++)
    {
        cout  << "\t" << i;
    }
    cout << "\n------------------------------------------------------------------------------------\n";
}

string PrintColumSperator(int i)
{
    if (i < 10) return "   |"; else return "  |";
}

void PrintMultiplicationTable()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << PrintColumSperator(i) ;
        for (int j = 1; j <= 10; j++)
        {
            cout << "\t" << j * i;
        }
        cout << endl;
    }
}

int main()
{
    PrintHeader();
    PrintMultiplicationTable();
}
