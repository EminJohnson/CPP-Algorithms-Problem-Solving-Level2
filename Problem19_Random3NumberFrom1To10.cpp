#include <iostream>
#include <cstdlib>
#include <ctime>

unsigned short RandomNumber(unsigned short From, unsigned short To)
{
    unsigned short  Random = rand() % (To -From + 1) + From;

    return Random;
}

void Random3Number()
{
    for (unsigned short i = 1; i <= 3; i++)
    {
        std::cout << "Number [" << i << "] is : " << RandomNumber(1, 10) << '\t';
    }
}

int main()
{
    srand((unsigned)time(NULL));
    Random3Number();

    return 0;
}