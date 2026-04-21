#include <iostream>
#include <string>

using namespace std;


void AllWordsFromAAAToZZZ()
{
string World = " ";

    for (char i = 65; i <= 90; i++)
    {
        for (char j = 65; j <= 90; j++)
        {
            for (char k = 65; k <= 90; k++)
            {
                World += i;
                World += j;
                World += k;
                cout << World << endl;
                World = " ";

            }
        }
    }
}

int main()
{
    AllWordsFromAAAToZZZ();
}
